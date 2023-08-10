#include <stdio.h>

int main()
{

    int num, x, i, fatorial = 1, primo = 0;

    printf("Digite um número: \n");
    scanf("%d", &num);

    for (int i = num; i > 1; i--)
    {
        fatorial *= i;
    }

    printf("O fatorial é: %d\n", fatorial);

    for (i = fatorial; i > 0; i--)
    {
        int contador = 0;

        for (int x = 1; x <= i; x++)
        {
            if (i % x == 0)
            {
                contador++;
            }
        }

        if (contador == 2 && primo == 0)
        {
            printf("O maior numero primo menor que %d é %d\n", fatorial, i);
            primo++;
        }
    }
}
