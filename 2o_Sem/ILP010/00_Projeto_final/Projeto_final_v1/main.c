#include <gtk/gtk.h>
#include "produtividade.h"

GtkWidget *lista_tarefas;

void atualizar_lista_tarefas()
{
    gtk_list_store_clear(GTK_LIST_STORE(lista_tarefas));
    GtkListStore *store = GTK_LIST_STORE(lista_tarefas);
    GtkTreeIter iter;

    for (int i = 0; i < num_tarefas; ++i)
    {
        gtk_list_store_append(store, &iter);
        gtk_list_store_set(store, &iter,
                        0, tarefas[i].descricao,
                        1, tarefas[i].prioridade,
                        2, tarefas[i].categoria,
                        3, tarefas[i].tempo_gasto,
                        -1);
    }
}

void on_add_task_button_clicked(GtkWidget *widget, gpointer data)
{
    // Adicionar uma nova janela de diálogo para adicionar tarefas
    adicionarTarefa();
    atualizar_lista_tarefas();
}

void on_edit_task_button_clicked(GtkWidget *widget, gpointer data)
{
    // Adicionar uma nova janela de diálogo para editar tarefas
    editarTarefa();
    atualizar_lista_tarefas();
}

void on_delete_task_button_clicked(GtkWidget *widget, gpointer data)
{
    // Adicionar uma nova janela de diálogo para excluir tarefas
    excluirTarefa();
    atualizar_lista_tarefas();
}

void on_start_time_button_clicked(GtkWidget *widget, gpointer data)
{
    iniciarTempo();
    atualizar_lista_tarefas();
}

void on_stop_time_button_clicked(GtkWidget *widget, gpointer data)
{
    pararTempo();
    atualizar_lista_tarefas();
}

void on_show_stats_button_clicked(GtkWidget *widget, gpointer data)
{
    exibirEstatisticas();
}

int main(int argc, char *argv[])
{
    gtk_init(&argc, &argv);

    inicializarSistema();

    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Gerenciador de Tarefas");
    gtk_window_set_default_size(GTK_WINDOW(window), 800, 600);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    GtkWidget *vbox = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), vbox);

    GtkWidget *hbox = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 5);
    gtk_box_pack_start(GTK_BOX(vbox), hbox, FALSE, FALSE, 0);

    GtkWidget *add_task_button = gtk_button_new_with_label("Adicionar Tarefa");
    g_signal_connect(add_task_button, "clicked", G_CALLBACK(on_add_task_button_clicked), NULL);
    gtk_box_pack_start(GTK_BOX(hbox), add_task_button, TRUE, TRUE, 0);

    GtkWidget *edit_task_button = gtk_button_new_with_label("Editar Tarefa");
    g_signal_connect(edit_task_button, "clicked", G_CALLBACK(on_edit_task_button_clicked), NULL);
    gtk_box_pack_start(GTK_BOX(hbox), edit_task_button, TRUE, TRUE, 0);

    GtkWidget *delete_task_button = gtk_button_new_with_label("Excluir Tarefa");
    g_signal_connect(delete_task_button, "clicked", G_CALLBACK(on_delete_task_button_clicked), NULL);
    gtk_box_pack_start(GTK_BOX(hbox), delete_task_button, TRUE, TRUE, 0);

    GtkWidget *start_time_button = gtk_button_new_with_label("Iniciar Tempo");
    g_signal_connect(start_time_button, "clicked", G_CALLBACK(on_start_time_button_clicked), NULL);
    gtk_box_pack_start(GTK_BOX(hbox), start_time_button, TRUE, TRUE, 0);

    GtkWidget *stop_time_button = gtk_button_new_with_label("Parar Tempo");
    g_signal_connect(stop_time_button, "clicked", G_CALLBACK(on_stop_time_button_clicked), NULL);
    gtk_box_pack_start(GTK_BOX(hbox), stop_time_button, TRUE, TRUE, 0);

    GtkWidget *show_stats_button = gtk_button_new_with_label("Exibir Estatísticas");
    g_signal_connect(show_stats_button, "clicked", G_CALLBACK(on_show_stats_button_clicked), NULL);
    gtk_box_pack_start(GTK_BOX(hbox), show_stats_button, TRUE, TRUE, 0);

    GtkWidget *scrolled_window = gtk_scrolled_window_new(NULL, NULL);
    gtk_box_pack_start(GTK_BOX(vbox), scrolled_window, TRUE, TRUE, 0);

    GtkListStore *store = gtk_list_store_new(4, G_TYPE_STRING, G_TYPE_INT, G_TYPE_STRING, G_TYPE_INT);
    lista_tarefas = GTK_WIDGET(store);

    GtkWidget *tree_view = gtk_tree_view_new_with_model(GTK_TREE_MODEL(store));
    gtk_container_add(GTK_CONTAINER(scrolled_window), tree_view);

    GtkCellRenderer *renderer;
    GtkTreeViewColumn *column;

    renderer = gtk_cell_renderer_text_new();
    column = gtk_tree_view_column_new_with_attributes("Descrição", renderer, "text", 0, NULL);
    gtk_tree_view_append_column(GTK_TREE_VIEW(tree_view), column);

    renderer = gtk_cell_renderer_text_new();
    column = gtk_tree_view_column_new_with_attributes("Prioridade", renderer, "text", 1, NULL);
    gtk_tree_view_append_column(GTK_TREE_VIEW(tree_view), column);

    renderer = gtk_cell_renderer_text_new();
    column = gtk_tree_view_column_new_with_attributes("Categoria", renderer, "text", 2, NULL);
    gtk_tree_view_append_column(GTK_TREE_VIEW(tree_view), column);

    renderer = gtk_cell_renderer_text_new();
    column = gtk_tree_view_column_new_with_attributes("Tempo Gasto (min)", renderer, "text", 3, NULL);
    gtk_tree_view_append_column(GTK_TREE_VIEW(tree_view), column);

    atualizar_lista_tarefas();

    gtk_widget_show_all(window);
    gtk_main();

    salvarDados();

    return 0;
}
