#include <stdio.h>

void main() /*Transformar for em while*/
{

    int i = 1, maior, menor, n, media = 0;

    printf("Digite 15 numeros: ");
    scanf("%d", &n);
    maior = n;
    menor = n;

    while (i < 15)
    {
        printf("Insira um numero ");
        scanf("%d", &n);
        media += n;
        if (n > maior)
        {
            maior = n;
        }
        else if (n < menor)
        {
            menor = n;
        }

        i++;
    }

    printf("A média é %d \nO maior numero é %d\nO menor numero é %d", media / 15, maior, menor);
}