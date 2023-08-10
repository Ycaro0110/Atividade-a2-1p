#include <stdio.h>

void main()
{

    int x = 0;

    while (x < 100)
    {
        x++;

        printf("%d ", x);

        if (x % 3 == 0) printf("PIM ");
    }
}