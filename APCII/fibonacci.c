#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n);

int main(){

    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("%d", fibonacci(n));

    return 0;
}

int fibonacci(int n){

    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else{
        return fibonacci(n - 1) + fibonacci(n - 2);
    }

}