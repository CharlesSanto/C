// Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo. A seguir calcule a duração do jogo.

// Obs: O jogo tem duração mínima de um (1) minuto e duração máxima de 24 horas.

// Entrada
// Quatro números inteiros representando a hora de início e fim do jogo.

// Saída
// Mostre a seguinte mensagem: “O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)” .


#include <stdio.h>

int main() {

    int hora_inicial, minuto_inicial, hora_final, minuto_final;

    printf("Hora inicial: ");
    scanf("%d", &hora_inicial);
    printf("Minuto incial: ");
    scanf("%d", &minuto_inicial);
    printf("Hora final: ");
    scanf("%d", &hora_final);
    printf("Minuto final: ");
    scanf("%d", &minuto_final);

    if (hora_inicial < hora_final && minuto_inicial < minuto_final)
    {
        int hora = hora_final - hora_inicial;
        int minuto = minuto_final - minuto_inicial;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", hora, minuto);
    }

    return 0;
}