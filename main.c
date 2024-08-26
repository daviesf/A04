#include <stdio.h>
#include "primo.h"

int main()
{
    float num;
    printf("Digite um numero: ");
    scanf("%f", &num);

    if (verificaNumero(num))
    {
        printf("Numero invalido\n");
        return 1;
    }

    int n = (int)num;

    if (primo(n))
        printf("O numero %d e primo\n", n);
    else
        printf("O numero %d nao e primo. O proximo primo e %d\n", n, proxPrimo(n));

    return 0;
}
