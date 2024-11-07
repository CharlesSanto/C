#include <stdio.h>

int main()
{   
    float salario, salarioFinal, ajuste;
    int percentual;
    scanf("%f", &salario);

    if (salario <= 400)
    {
        ajuste = (salario * 0.15);
        salarioFinal = (salario * 0.15) + salario;
        percentual = 15;
    }
    else if (salario >= 400.01 && salario <= 800)
    {
        ajuste = (salario * 0.12);
        salarioFinal = (salario * 0.12) + salario;
        percentual = 12;
    }
    else if (salario >= 800.01 && salario <= 1200)
    {
        ajuste = (salario * 0.10);
        salarioFinal = (salario * 0.10) + salario;
        percentual = 10;
    }
    else if (salario >= 1200.01 && salario <= 2000)
    {
        ajuste = (salario * 0.07);
        salarioFinal = (salario * 0.07) + salario;
        percentual = 7;
    }
    else if (salario > 2000) 
    {
        ajuste = (salario * 0.04);
        salarioFinal = (salario * 0.04) + salario;
        percentual = 4;
    }

    printf("Novo salario: %.2f\n", salarioFinal);
    printf("Reajuste ganho: %.2f\n", ajuste);
    printf("Em percentual: %d %%\n", percentual);


    return 0;
}