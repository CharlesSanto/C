// Exercício 3: Manipulação de Vetor Dinâmico
// Escreva um programa que utilize malloc para alocar um vetor de inteiros. O usuário deve inserir o tamanho do vetor e os valores de cada elemento. Crie uma função para calcular e retornar a média dos valores no vetor.

// Passos:

// Solicite ao usuário o tamanho do vetor e, em seguida, use malloc para alocar o espaço necessário.
// Peça para o usuário inserir os valores do vetor.
// Crie uma função calcularMedia que receba um ponteiro para o vetor e o tamanho, e retorne a média dos valores.
// No final, exiba o valor da média e libere a memória alocada.

#include <stdio.h>
#include <stdlib.h>

float calcularMedia(int *vetor, int tam);

int main()
{
    int tamanho_vetor, i, valor;
    int *numeros;
    float contador;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho_vetor);

    numeros = (int*)malloc(sizeof(int) * tamanho_vetor);

    printf("Digite os numeros para o vetor separados por espaco: ");

    for (int i = 0; i < tamanho_vetor; i++)
    {
        // printf("Digite o numero para o vetor: ");
        scanf("%d", &numeros[i]);
        // numeros[i] = valor;

    }

    contador = calcularMedia(numeros, tamanho_vetor);
    printf("Media dos numeros no vetor = %.1f\n", contador);

    free(numeros);

    return 0;
}

float calcularMedia(int *vetor, int tam)
{
    float contador = 0;
    for (int i = 0; i < tam; i++)
    {
        contador += vetor[i];
    }

    return contador/ tam;
}