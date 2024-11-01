#include <stdio.h>
#include <stdlib.h>

void fibonacci(int n);

int main(){

    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    fibonacci(n);
    
    return 0;
}

void fibonacci(int n){

    int i, fib0 = 0, fib1 = 1, nextfb;

    printf("%d\n", fib0);

    if (n > 1)
    printf("%d\n", fib1);

    for(i = 1; i < n; i++){

        printf("%d\n", nextfb = fib0 + fib1);
        fib0 = fib1;
        fib1 = nextfb;
    }

}