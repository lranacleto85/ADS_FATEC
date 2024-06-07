#include "produtividade.h"
#include <stdio.h>
#include <string.h>
#include <json-c/json.h>

Tarefa tarefas[MAX_TAREFAS];
int numero_tarefas = 0;

void carregarDados()
{
    FILE *file = fopen("tarefas.json", "r");
    if (file == NULL)
    {
        return;
    }

    struct json_object *json_root = json_object_from_file("tarefas.json");
    if (json_root == NULL)
    {
        fclose(file);
        return;
    }

    int array_len = json_object_array_length(json_root);
    for (int i = 0; i < array_len; i++)
    {
        struct json_object *json_task = json_object_array_get_idx(json_root, i);
        struct json_object *json_nome;
        struct json_object *json_descricao;

        json_object_object_get_ex(json_task, "nome", &json_nome);
        json_object_object_get_ex(json_task, "descricao", &json_descricao);

        strncpy(tarefas[i].nome, json_object_get_string(json_nome), sizeof(tarefas[i].nome) - 1);
        tarefas[i].nome[sizeof(tarefas[i].nome) - 1] = '\0'; // Garantir null-termination
        strncpy(tarefas[i].descricao, json_object_get_string(json_descricao), sizeof(tarefas[i].descricao) - 1);
        tarefas[i].descricao[sizeof(tarefas[i].descricao) - 1] = '\0'; // Garantir null-termination
    }

    numero_tarefas = array_len;
    json_object_put(json_root);
    fclose(file);
}

void salvarDados()
{
    struct json_object *json_root = json_object_new_array();

    for (int i = 0; i < numero_tarefas; i++)
    {
        struct json_object *json_task = json_object_new_object();
        json_object_object_add(json_task, "nome", json_object_new_string(tarefas[i].nome));
        json_object_object_add(json_task, "descricao", json_object_new_string(tarefas[i].descricao));
        json_object_array_add(json_root, json_task);
    }

    FILE *file = fopen("tarefas.json", "w");
    if (file != NULL)
    {
        fputs(json_object_to_json_string(json_root), file);
        fclose(file);
    }

    json_object_put(json_root);
}

void limparDados()
{
    numero_tarefas = 0;
    FILE *file = fopen("tarefas.json", "w");
    if (file != NULL)
    {
        fputs("[]", file);
        fclose(file);
    }
}
