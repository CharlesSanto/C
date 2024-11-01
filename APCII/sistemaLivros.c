// Exercício 2: Sistema de livro
// Desenvolva um programa que gerencie uma pequena biblioteca. Cada livro tem título, autor e número de páginas. Crie uma função que permita adicionar livro e outra que mostre todos os livro cadastrados.

// Passos:

// Defina uma struct chamada Livro com os campos titulo, autor e numPaginas.
// Crie uma função adicionarLivro que use malloc para criar um novo livro e preencha seus dados.
// Crie uma função mostrarlivro que percorre o vetor de livro e exibe os detalhes de cada livro.
// No main, crie uma lista dinâmica de livro usando um ponteiro e vá chamando a função adicionarLivro para inserir os livro e mostrarlivro para exibir todos.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct livro
{
    char titulo[50];
    char autor[50];
    int numPaginas;
}livro;

livro adicionarLivro();
void mostrar_livro(livro a);
void mostrar_livros(livro *v, int tam);

int main()
{
    livro *livros;
    int quantidade, i;

    system("cls");

    printf("Digite a quantidade livros que deseja adicionar: ");
    scanf("%d", &quantidade);

    system("cls");

    livros = (livro*)malloc(sizeof(livros) * quantidade);

    for (int i = 0; i < quantidade; i++)
    {
        printf("Adicione o livro %d\n", i +1);
        livros[i] = adicionarLivro();
    }

    mostrar_livros(livros, quantidade);

    return 0;
}

livro adicionarLivro()
{
    livro a;

    printf("Adicione o titulo do livro: ");
    scanf(" %[^\n]", a.titulo);
    printf("Adicone o nome do autor do livro: ");
    scanf(" %[^\n]", a.autor);
    printf("Adicone a quantidade de paginas: ");
    scanf("%d", &a.numPaginas);

    system("cls");
    return a;
}

void mostrar_livro(livro a)
{   
    printf("Titulo:  %s\n", a.titulo);
    printf("Autor:   %s\n", a.autor);
    printf("Paginas: %d\n", a.numPaginas);
}

void mostrar_livros(livro *v, int tam)
{

    for(int i = 0; i < tam; i++)
    {
        printf("\n");
        printf("Dados do livro %d\n", i+1);
        mostrar_livro(v[i]);
    }

}