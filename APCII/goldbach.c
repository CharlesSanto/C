#include <stdio.h>
#include <stdlib.h>

int primo(int n);

int main(){

    int n, i;

    printf("Digite um numero par: ");
    scanf("%d", &n);

    for(i = 1; i <= n / 2; i++){

        if (primo(i) && primo(n - i)){

            printf("%d + %d = %d\n", i, n-i, n);
        }
    }
    return 0;
} 
int primo(int n){
    if(n < 2)
        return 0;

    int i;

    for(i = 2; i < n; i++){

        if (n % i == 0)
        return 0;
    }
    return 1;
}