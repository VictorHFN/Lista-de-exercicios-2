#include <stdio.h>

float retornaMaior(float num1, float num2);

int main()
{
    float valor1, valor2;

    printf("Digite dois valores: ");
    scanf("%f %f", &valor1, &valor2);

    float maiorValor = retornaMaior(valor1, valor2);

    printf("O maior valor entre %f e %f é %f.\n", valor1, valor2, maiorValor);

    return 0;
}
float retornaMaior(float num1, float num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}
