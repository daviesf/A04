#include <stdio.h>
#include <math.h>

// Função que verifica se um número é primo.
int primo(int n)
{
    int i;
    if (n == 1) // 1 não é primo
        return 0;
    if (n == 2) // 2 é primo
        return 1;
    if (n % 2 == 0) // Números pares não são primos
        return 0;

    for (i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

// Função que retorna o próximo número primo
int proxPrimo(int n)
{
    for (int i = n + 1;; i++)
    {
        if (primo(i))
            return i;
    }
}

// Função que verifica se o número inserido é menor ou igual a zero ou flutuante, se sim, inválido.
int verificaNumero(float n)
{
    if (n <= 0)
        return 1;
    else if (n != (int)n)
        return 1;
    else
        return 0;
}
