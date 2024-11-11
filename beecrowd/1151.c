#include <stdio.h>

void fibonacci(int n);

int main(){

    int n;
    scanf("%d", &n);

    fibonacci(n);
    
    return 0;
}

void fibonacci(int n){

    int i, fib0 = 0, fib1 = 1, nextfb;

    printf("%d", fib0);

    if (n > 1)
    printf(" %d", fib1);

    for(i = 2; i < n; i++){

        printf(" %d", nextfb = fib0 + fib1);
        fib0 = fib1;
        fib1 = nextfb;
    }
    printf("\n");
}