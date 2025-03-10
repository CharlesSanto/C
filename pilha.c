#include <stdio.h>
#include <stdlib.h>

#define MAX 10

typedef struct stack
{
    int itens[MAX];
    int top;
} stack;

void startStack(stack *s)
{
    s->top = -1;
}

int isEmpty(stack *s)
{
    return s->top == -1;
}

int isFull(stack *s)
{
    return s->top >= MAX - 1;
}

void push(stack *s, int value)
{
    if (isFull(s))
    {
        printf("A pilha esta cheia. Desempilhe.\n");
        return;
    }
    s->top++;
    s->itens[s->top] = value;
    printf("Valor %d empilhado.\n", value);
}

void pop(stack *s)
{
    if (isEmpty(s))
    {
        printf("A pilha está vazia, empilhe algo antes de desempilhar!\n");
        return;
    }

    printf("Valor desempilhado %d\n", s->itens[s->top]);
    s->top--;
}

void peek(stack *s)
{
    if (isEmpty(s))
    {
        printf("Pilha esta vazia. Empilhe para ver o topo.\n");
        return;
    }

    printf("Topo da pilha: %d", s->itens[s->top]);
}

void showStack(stack *s)
{
    if (isEmpty(s))
    {
        printf("Pilha esta vazia. Empilhe.\n");
        return;
    }

    printf("Itens: ");

    for (int i = 0; i <= s->top; i++)
    {
        printf("%d ", s->itens[i]);
    }
}

int getValidChoice() {
    int choice;
    while (1)
    {
        printf("Opcao: ");
        if (scanf("%d", &choice) != 1)
        {
            while (getchar() != '\n');  
            printf("Opção inválida! Tente novamente (Escolha entre 1 e 5).\n");
            continue;
        }

        if (choice >= 1 && choice <= 5)
            return choice;

        printf("Opção inválida! Tente novamente (Escolha entre 1 e 5).\n");
    }
}

int main()
{

    stack s;
    int choice, value;

    startStack(&s);

    do
    {

        printf("\nEscolha uma opção:\n");
        printf("1. Empilhar (Push)\n");
        printf("2. Desempilhar (Pop)\n");
        printf("3. Ver topo (Peek)\n");
        printf("4. Exibir pilha\n");
        printf("5. Sair\n");

        choice = getValidChoice();

        switch (choice)
        {
        case 1:
            printf("Valor a ser empilhado: ");
            scanf("%d", &value);
            push(&s, value);
            break;
        case 2:
            pop(&s);
            break;
        case 3:
            peek(&s);
            break;
        case 4:
            showStack(&s);
            break;
        case 5:
            printf("Saindo\n");
            return 0;
        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
        }

    } while (choice != 5);

    return 0;
}