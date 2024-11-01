// Exercício 1: Cadastro de Alunos
// Crie um programa que permita o cadastro de alunos. Cada aluno possui nome, idade e uma nota final. A quantidade de alunos deve ser definida pelo usuário no início do programa. Utilize malloc para alocar memória dinamicamente e struct para organizar as informações dos alunos.

// Passos:

// Crie uma struct chamada Aluno com os campos nome, idade e notaFinal.
// Use malloc para alocar um vetor de Aluno conforme o número de alunos que o usuário deseja cadastrar.
// Peça para o usuário inserir os dados de cada aluno.
// Exiba as informações dos alunos após o cadastro.

#include <stdio.h>
#include <stdlib.h>

typedef struct aluno
{
    char nome[40];
    int idade;
    float notaFinal;
}aluno;

aluno preenche_aluno();
void mostrar_aluno(aluno a);
void mostrar_turma(aluno *v, int tam);

int main()
{
    aluno *turma;
    int quantidade;
    int i;

    system("cls");
    printf("Digite a quantidade de alunos que deseja cadastrar: ");
    scanf("%d", &quantidade);

    turma = (aluno*)malloc(sizeof(aluno) * quantidade);

    for(int i = 0; i < quantidade; i++)
    {
        system("cls");
        printf("Dados do aluno %d\n", i +1);
        turma[i] = preenche_aluno();
        
    }

    system("cls");
    mostrar_turma(turma, quantidade);

    return 0;
}

aluno preenche_aluno()
{
    aluno a;

    printf("Nome do aluno   : ");
    scanf("%s", a.nome);
    printf("Idade do aluno: ");
    scanf("%d", &a.idade);
    printf("Nota final    : ");
    scanf("%f", &a.notaFinal);

    return a;
}

void mostrar_aluno(aluno a)
{
    printf("Nome:       %s\n", a.nome);
    printf("Idade:      %d\n", a.idade);
    printf("Nota final: %.2f\n", a.notaFinal);

}

void mostrar_turma(aluno *v, int tam)
{

    for(int i = 0; i < tam; i++)
    {
        printf("\n");
        printf("Dados do aluno %d\n", i +1);
        mostrar_aluno(v[i]);
    }

}
