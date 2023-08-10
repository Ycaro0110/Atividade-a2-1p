#include <stdio.h>

void main()
{

    int x, i;
    float n, media;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &x);

    for (i = 0; i < x; i++)
    {
        printf("Insira um numero ");
        scanf("%f", &n);

        media += n;
    }

       printf("A média é %.2f ", media/x);
}