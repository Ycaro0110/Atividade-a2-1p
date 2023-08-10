#include <stdio.h>

void main()
{

    int divisor, dividendo, quociente = 0;

    printf("digite o dividendo : ");
    scanf("%d", &dividendo);

    printf("digite o divisor ");
    scanf("%d", &divisor);

    for (quociente; dividendo > 0 && dividendo >= divisor; quociente++)
    {
        dividendo -= divisor;
    }

    printf("o resultado da divisão é %d", quociente);
}