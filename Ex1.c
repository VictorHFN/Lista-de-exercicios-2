#include <stdio.h>

void parOuImpar(int num);

int main()
{
    int valor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &valor);
    parOuImpar(valor);

    return 0;
}
void parOuImpar(int num)
{
    if (num % 2 == 0)
    {
        printf("%d numero par.\n", num);
    }
    else
    {
        printf("%d numero ímpar.\n", num);
    }
}
