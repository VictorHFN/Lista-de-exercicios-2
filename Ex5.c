#include <stdio.h>

float retornaMaior(float num1, float num2);
float retornaMaiorTres(float num1, float num2, float num3);

int main()
{
    float valor1, valor2, valor3;

    printf("Digite tres valores: ");
    scanf("%f %f %f", &valor1, &valor2, &valor3);

    float maiorValor = retornaMaiorTres(valor1, valor2, valor3);

    printf("O maior valor entre %f, %f e %f é %f.\n", valor1, valor2, valor3, maiorValor);

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
float retornaMaiorTres(float num1, float num2, float num3)
{
    float maior1 = retornaMaior(num1, num2);
    float maior2 = retornaMaior(maior1, num3);
    return maior2;
}