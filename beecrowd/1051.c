#include <stdio.h>

int main()
{
    float salario, imposto = 0.0;
    scanf("%f", &salario);

    if (salario > 4500.0)
    {
        imposto += (salario - 4500.0) * 0.28;
        salario = 4500.0;
    }
    if (salario > 3000.0)
    {
        imposto += (salario - 3000.0) * 0.18;
        salario = 3000.0;
    }
    if (salario > 2000.0)
    {
        imposto += (salario - 2000.0) * 0.08;
    }
    if (imposto > 0.0)
    {
        printf("R$ %.2f\n", imposto);
    }
    else
    {
        printf("Isento\n");
    }

    return 0;
}