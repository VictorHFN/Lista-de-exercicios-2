#include <stdio.h>

float retornaMenor(float num1, float num2);

int main()
{
    float valor1, valor2;

    printf("Digite dois valores: ");
    scanf("%f %f", &valor1, &valor2);

    float menorValor = retornaMenor(valor1, valor2);

    printf("O menor valor entre %f e %f é %f.\n", valor1, valor2, menorValor);

    return 0;
}
float retornaMenor(float num1, float num2)
{
    if (num1 < num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}
