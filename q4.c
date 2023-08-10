#include <stdio.h>

void main()
{

    int x, i, fatorial = 1;

    printf("Digite um número:\n");
    scanf("%d", &x);

    for (int i = x; i > 1; i--)
    {
        fatorial *= i;
    }

    printf("O fatorial desse numero é: %d\n", fatorial);
}