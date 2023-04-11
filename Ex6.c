#include <stdio.h>

float retornaMenor(float num1, float num2);
float retornaMenorTres(float num1, float num2, float num3);

int main()
{
    float valor1, valor2, valor3;

    printf("Digite tres valores: ");
    scanf("%f %f %f", &valor1, &valor2, &valor3);

    float menorValor = retornaMenorTres(valor1, valor2, valor3);

    printf("O menor valor entre %f, %f e %f é %f.\n", valor1, valor2, valor3, menorValor);

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
float retornaMenorTres(float num1, float num2, float num3)
{
    float menor1 = retornaMenor(num1, num2);
    float menor2 = retornaMenor(menor1, num3);
    return menor2;
}
