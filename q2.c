#include <stdio.h>

void main()
{

    int divisor, dividendo, quociente = 0;

    printf("Digite o dividendo :\n ");
    scanf("%d", &dividendo);

    printf("Digite o divisor:\n");
    scanf("%d", &divisor);

    while (dividendo > 0 && dividendo >= divisor)
    {
        dividendo -= divisor;

        quociente++;
    }

    printf("o resultado da divisão é %d", quociente);
}