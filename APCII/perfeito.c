#include <stdio.h>
#include <stdlib.h>

int perfeito(int x);

int main(){

    int x;

    printf("Digite um numero: ");
    scanf("%d", &x);

    if (perfeito(x) == 1)
    printf("%d eh perfeito\n", x);
    else
    printf("%d nao e perfeito\n", x);

    return 0;
}

int perfeito(int x){

    int i, soma;

    for( i = 1; i < x; i++){

        if(x % i == 0){

            soma += i;
        } 

    }
    
    if (soma == x)
    return 1;

    else
    return 0;

}
