#include "gui.h"
#include "produtividade.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static GtkWidget *task_list;

void update_task_list()
{
    char task_list_text[1024] = "Tarefas:\n";
    for (int i = 0; i < numero_tarefas; i++)
    {
        strcat(task_list_text, tarefas[i].nome);
        strcat(task_list_text, "\n");
    }
    gtk_label_set_text(GTK_LABEL(task_list), task_list_text);
}

void save_task_callback(GtkWidget *widget, gpointer data)
{
    GtkWidget **entries = (GtkWidget **)data;
    const char *nome = gtk_entry_get_text(GTK_ENTRY(entries[0]));
    const char *descricao = gtk_entry_get_text(GTK_ENTRY(entries[1]));

    printf("Salvando tarefa: Nome = %s, Descrição = %s\n", nome, descricao); // Debug

    if (strlen(nome) == 0 || strlen(descricao) == 0)
    {
        GtkWidget *dialog = gtk_message_dialog_new(GTK_WINDOW(gtk_widget_get_toplevel(widget)),
                                                   GTK_DIALOG_DESTROY_WITH_PARENT,
                                                   GTK_MESSAGE_ERROR,
                                                   GTK_BUTTONS_CLOSE,
                                                   "Nome e Descrição não podem estar vazios");
        gtk_dialog_run(GTK_DIALOG(dialog));
        gtk_widget_destroy(dialog);
        return;
    }

    if (numero_tarefas < MAX_TAREFAS)
    {
        strncpy(tarefas[numero_tarefas].nome, nome, sizeof(tarefas[numero_tarefas].nome) - 1);
        tarefas[numero_tarefas].nome[sizeof(tarefas[numero_tarefas].nome) - 1] = '\0'; // Garantir null-termination
        strncpy(tarefas[numero_tarefas].descricao, descricao, sizeof(tarefas[numero_tarefas].descricao) - 1);
        tarefas[numero_tarefas].descricao[sizeof(tarefas[numero_tarefas].descricao) - 1] = '\0'; // Garantir null-termination
        numero_tarefas++;
        salvarDados();
        GtkWidget *dialog = gtk_message_dialog_new(GTK_WINDOW(gtk_widget_get_toplevel(widget)),
                                                   GTK_DIALOG_DESTROY_WITH_PARENT,
                                                   GTK_MESSAGE_INFO,
                                                   GTK_BUTTONS_CLOSE,
                                                   "Tarefa salva com sucesso!");
        gtk_dialog_run(GTK_DIALOG(dialog));
        gtk_widget_destroy(dialog);
        update_task_list();
    }
    else
    {
        GtkWidget *dialog = gtk_message_dialog_new(GTK_WINDOW(gtk_widget_get_toplevel(widget)),
                                                   GTK_DIALOG_DESTROY_WITH_PARENT,
                                                   GTK_MESSAGE_ERROR,
                                                   GTK_BUTTONS_CLOSE,
                                                   "Limite de tarefas atingido!");
        gtk_dialog_run(GTK_DIALOG(dialog));
        gtk_widget_destroy(dialog);
    }
}

void add_task_window(GtkWidget *widget, gpointer data)
{
    GtkWidget *window;
    GtkWidget *grid;
    GtkWidget *button_save_task;
    GtkWidget *entry_name;
    GtkWidget *entry_description;

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Adicionar Tarefa");
    gtk_container_set_border_width(GTK_CONTAINER(window), 10);
    gtk_window_set_default_size(GTK_WINDOW(window), 300, 200);
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);

    grid = gtk_grid_new();
    gtk_grid_set_row_spacing(GTK_GRID(grid), 10);
    gtk_grid_set_column_spacing(GTK_GRID(grid), 10);
    gtk_container_add(GTK_CONTAINER(window), grid);

    entry_name = gtk_entry_new();
    gtk_entry_set_placeholder_text(GTK_ENTRY(entry_name), "Nome da Tarefa");
    gtk_grid_attach(GTK_GRID(grid), entry_name, 0, 0, 1, 1);

    entry_description = gtk_entry_new();
    gtk_entry_set_placeholder_text(GTK_ENTRY(entry_description), "Descrição da Tarefa");
    gtk_grid_attach(GTK_GRID(grid), entry_description, 0, 1, 1, 1);

    GtkWidget *entries[2] = {entry_name, entry_description};

    button_save_task = gtk_button_new_with_label("Salvar Tarefa");
    g_signal_connect(button_save_task, "clicked", G_CALLBACK(save_task_callback), entries);
    gtk_grid_attach(GTK_GRID(grid), button_save_task, 0, 2, 1, 1);

    gtk_widget_show_all(window);
}

void delete_task_callback(GtkWidget *widget, gpointer data)
{
    GtkWidget **entries = (GtkWidget **)data;
    const char *index_str = gtk_entry_get_text(GTK_ENTRY(entries[0]));
    int index = atoi(index_str);

    printf("Tentando excluir tarefa no índice: %d\n", index); // Debug

    if (index < 0 || index >= numero_tarefas)
    {
        GtkWidget *dialog = gtk_message_dialog_new(GTK_WINDOW(gtk_widget_get_toplevel(widget)),
                                                   GTK_DIALOG_DESTROY_WITH_PARENT,
                                                   GTK_MESSAGE_ERROR,
                                                   GTK_BUTTONS_CLOSE,
                                                   "Índice de tarefa inválido");
        gtk_dialog_run(GTK_DIALOG(dialog));
        gtk_widget_destroy(dialog);
        return;
    }

    for (int i = index; i < numero_tarefas - 1; i++)
    {
        tarefas[i] = tarefas[i + 1];
    }
    numero_tarefas--;
    salvarDados();
    update_task_list();

    GtkWidget *dialog = gtk_message_dialog_new(GTK_WINDOW(gtk_widget_get_toplevel(widget)),
                                               GTK_DIALOG_DESTROY_WITH_PARENT,
                                               GTK_MESSAGE_INFO,
                                               GTK_BUTTONS_CLOSE,
                                               "Tarefa excluída com sucesso!");
    gtk_dialog_run(GTK_DIALOG(dialog));
    gtk_widget_destroy(dialog);
}

void delete_task_window(GtkWidget *widget, gpointer data)
{
    GtkWidget *window;
    GtkWidget *grid;
    GtkWidget *button_confirm_delete;
    GtkWidget *entry_index;

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Excluir Tarefa");
    gtk_container_set_border_width(GTK_CONTAINER(window), 10);
    gtk_window_set_default_size(GTK_WINDOW(window), 300, 200);
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);

    grid = gtk_grid_new();
    gtk_grid_set_row_spacing(GTK_GRID(grid), 10);
    gtk_grid_set_column_spacing(GTK_GRID(grid), 10);
    gtk_container_add(GTK_CONTAINER(window), grid);

    entry_index = gtk_entry_new();
    gtk_entry_set_placeholder_text(GTK_ENTRY(entry_index), "Índice da Tarefa");
    gtk_grid_attach(GTK_GRID(grid), entry_index, 0, 0, 1, 1);

    GtkWidget *entries[1] = {entry_index};

    button_confirm_delete = gtk_button_new_with_label("Confirmar");
    g_signal_connect(button_confirm_delete, "clicked", G_CALLBACK(delete_task_callback), entries);
    gtk_grid_attach(GTK_GRID(grid), button_confirm_delete, 0, 1, 1, 1);

    gtk_widget_show_all(window);
}

void initialize_gui(int argc, char *argv[])
{
    GtkWidget *window;
    GtkWidget *grid;
    GtkWidget *button_add_task;
    GtkWidget *button_start_activity;
    GtkWidget *button_view_statistics;
    GtkWidget *button_delete_task;

    gtk_init(&argc, &argv);

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Gerenciador de Tarefas");
    gtk_container_set_border_width(GTK_CONTAINER(window), 10);
    gtk_window_set_default_size(GTK_WINDOW(window), 400, 300);
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);

    grid = gtk_grid_new();
    gtk_grid_set_row_spacing(GTK_GRID(grid), 10);
    gtk_grid_set_column_spacing(GTK_GRID(grid), 10);
    gtk_container_add(GTK_CONTAINER(window), grid);

    // Listagem das tarefas
    task_list = gtk_label_new(NULL);
    gtk_grid_attach(GTK_GRID(grid), task_list, 0, 0, 4, 1);

    button_add_task = gtk_button_new_with_label("Adicionar Tarefa");
    g_signal_connect(button_add_task, "clicked", G_CALLBACK(add_task_window), NULL);
    gtk_grid_attach(GTK_GRID(grid), button_add_task, 0, 1, 1, 1);

    button_start_activity = gtk_button_new_with_label("Iniciar Atividade");
    gtk_grid_attach(GTK_GRID(grid), button_start_activity, 1, 1, 1, 1);

    button_view_statistics = gtk_button_new_with_label("Visualizar Estatísticas");
    gtk_grid_attach(GTK_GRID(grid), button_view_statistics, 2, 1, 1, 1);

    button_delete_task = gtk_button_new_with_label("Excluir Tarefa");
    g_signal_connect(button_delete_task, "clicked", G_CALLBACK(delete_task_window), NULL);
    gtk_grid_attach(GTK_GRID(grid), button_delete_task, 3, 1, 1, 1);

    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    gtk_widget_show_all(window);

    void limparDados(); // Declare the 'limparDados' function

    limparDados(); // Limpar o histórico de tarefas ao iniciar
    carregarDados();
    update_task_list();

    gtk_main();
}
