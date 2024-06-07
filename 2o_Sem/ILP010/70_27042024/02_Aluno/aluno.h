#define MAX 100

typedef struct aluno
{
    char nome[81];
    int matricula;
    char endereco[121];
    char telefone[21];
    double nota;
} aluno;

typedef aluno *p_aluno;

extern p_aluno v[MAX];

void inicializa();

void ler_dados(int i);

void imprimir_unico(int i);

void imprimir_tudo();
