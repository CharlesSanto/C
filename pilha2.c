#include <stdio.h>
#include <stdlib.h>

#define MAX 10

typedef struct {
    int itens[MAX];
    int topo;
} Pilha;

void inicializar(Pilha *p) {
    p->topo = -1;
}

int estaVazia(Pilha *p) {
    return p->topo == -1;
}

int estaCheia(Pilha *p) {
    return p->topo == MAX - 1;
}

void empilhar(Pilha *p, int valor) {
    if (!estaCheia(p)) {
        p->itens[++p->topo] = valor;
    } else {
        printf("Pilha cheia!\n");
    }
}

int desempilhar(Pilha *p) {
    if (!estaVazia(p)) {
        return p->itens[p->topo--];
    } else {
        printf("Pilha vazia\n");
        return -1;
    }
}

to
void exibirPilha(Pilha *p) {
    printf("Desempilhando elementos restantes:\n");
    while (!estaVazia(p)) {
        printf("%d\n", desempilhar(p));
    }
}

int main() {
    Pilha p;
    inicializar(&p);
    int numero;

    printf("Digite 10 números:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numero);
        
        if (numero % 2 == 0) {
            empilhar(&p, numero);
        } else {
            desempilhar(&p);
        }
    }

    if (!estaVazia(&p)) {
        exibirPilha(&p);
    }

    return 0;
}
