#include <stdio.h>

void verificaPositivo(int num);

int main()
{
    int valor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    verificaPositivo(valor);

    return 0;
}
void verificaPositivo(int num)
{
    if (num > 0)
    {
        printf("%d e positivo.\n", num);
    }

    else if (num < 0)
    {
        printf("%d nao e positivo.\n", num);
    }
}