#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int primo(int n);

int main(){

    int n, i;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++){

        if (primo(i)){
            printf("%d eh primo\n", i);
        }else{
            printf("%d nao eh primo\n", i);
        }

    }


}

int primo(int n){

    if (n == 1)
        return 0;

    int i;

    for(i = 2; i <= sqrt(n); i++){

         if (n % i == 0)
        return 0;

    }

    return 1;

}