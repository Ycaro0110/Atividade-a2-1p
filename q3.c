#include <stdio.h>

void main()
{

    int x, i = 0;

    printf("Digite um número:\n");
    scanf("%d", &x);
    printf("Esse número é divisivel por: ");

    for (int y = 1; y <= x; y++)
    {
        if (x % y == 0)
        {
            printf("%d ", y);
        }
    }
}