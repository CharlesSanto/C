#include <stdio.h>

int main()
{
    int dia1, hora1, minuto1, segundo1;
    int dia2, hora2, minuto2, segundo2;

    scanf("Dia %d", &dia1);
    scanf("%d : %d : %d", &hora1, &minuto1, &segundo1);

    getchar(); // Consumir a quebra de linha no buffer

    scanf("Dia %d", &dia2);
    scanf("%d : %d : %d", &hora2, &minuto2, &segundo2);

    int duracaoDia1 = (dia1 * 86400) + (hora1 * 3600) + (minuto1 * 60) + segundo1; // 29.543
    int duracaoDia2 = (dia2 * 86400) + (hora2 * 3600) + (minuto2 * 60) + segundo2; // 22.403

    int dia, hora, minutos, segundos;

    if (duracaoDia1 < duracaoDia2)
    {
        dia = (duracaoDia2 - duracaoDia1) / 86400;
        hora = ((duracaoDia2 - duracaoDia1) % 86400) / 3600;
        minutos = ((duracaoDia2 - duracaoDia1) % 3600) / 60;
        segundos = (duracaoDia2 - duracaoDia1) % 60;

    }
    else
    {
        dia = (duracaoDia1 - duracaoDia1) / 86400;
        hora = ((duracaoDia1 - duracaoDia2) % 86400) / 3600;
        minutos = ((duracaoDia1 - duracaoDia2) % 3600) / 60;
        segundos = (duracaoDia1 - duracaoDia2) % 60;
    }

    printf("%d dia(s)\n", dia);
    printf("%d hora(s)\n", hora);
    printf("%d minuto(s)\n", minutos);
    printf("%d segundo2(s)\n", segundos);

    

    return 0;
}