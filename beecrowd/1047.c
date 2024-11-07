// Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo. A seguir calcule a duração do jogo.

// Obs: O jogo tem duração mínima de um (1) minuto e duração máxima de 24 horas.

// Entrada
// Quatro números inteiros representando a hora de início e fim do jogo.

// Saída
// Mostre a seguinte mensagem: “O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)” .

#include <stdio.h>

int main()
{
    int hora_inicial, minuto_inicial, hora_final, minuto_final;
    int hora, minuto;

    scanf("%d %d %d %d", &hora_inicial, &minuto_inicial, &hora_final, &minuto_final);

    if (hora_inicial < 0 || hora_inicial >= 24 || hora_final < 0 || hora_final >= 24 ||
        minuto_inicial < 0 || minuto_inicial >= 60 || minuto_final < 0 || minuto_final >= 60) {
        return 1;
    }

    int comeco_minutos = hora_inicial * 60 + minuto_inicial;
    int fim_minutos = hora_final * 60 + minuto_final;

    int duracao_minutos;

    if(fim_minutos >= comeco_minutos)
    {
        duracao_minutos = fim_minutos - comeco_minutos;
    }
    else
    {
        duracao_minutos = (24*60) - comeco_minutos + fim_minutos;
    }

    hora = duracao_minutos / 60;
    minuto = duracao_minutos % 60;

    if (hora_inicial == hora_final && minuto_inicial == minuto_final)
    {
        hora = 24;
        minuto = 0;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, minuto);


    return 0;
}
