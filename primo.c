#include <stdio.h>
#include <stdlib.h>

int primo(int x);

int main() {

    int x;

    printf("Digite um numero: ");
    scanf("%d", &x);

    if (primo(x) == 1)
        printf("eh primo");
    else 
        printf("nao e primo");


    return 0;
}

int primo(int x){

    if (x == 1)
    return 0;

    int i;

    for(i = 2; i < x; i++){

        if(x % i == 0)
        return 0;
    }
    return 1;
}