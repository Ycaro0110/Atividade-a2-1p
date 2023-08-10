#include <stdio.h>

void main()
{

    int x, i, maior, menor, n, media = 0;

    printf("Digite 15 numeros: ");
    scanf("%d", &n);
    maior = n;
    menor = n;

    for (i = 1; i < 15; i++)
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
    }

    printf("A média é %d \nO maior numero é %d\nO menor numero é %d", media / 15, maior, menor);
}
