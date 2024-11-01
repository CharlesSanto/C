#include <stdio.h>
#include <stdlib.h>

int main() {

    struct horario{

        int horas;
        int minutos;
        int segundos;
    };

    struct horario agora;

        agora.horas = 15;
        agora.minutos = 30;
        agora.segundos = 35;
    

    printf("%d:%d:%d", agora.horas, agora.minutos, agora.segundos);

    return 0;
}