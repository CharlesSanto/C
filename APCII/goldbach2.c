#include <stdio.h>
#include <stdlib.h>

void fibonacci(int x);

int main(){

    int x;

    printf("Digite um numero: ");
    scanf("%d", &x);

    fibonacci(x);

    return 0;
}

void fibonacci(int x){

    int i, fib0 = 0, fib1 = 1, nextfib;

    printf("%d\n", fib0);

    if (x > 1)
        printf("%d\n", fib1);

    for(i = 2; i <= x; i++){

        printf("%d\n", nextfib = fib0 + fib1);
        fib0 = fib1;
        fib1 = nextfib;

    }

}