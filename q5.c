#include <stdio.h>

void main()
{

    int n1, n2, soma = 0, count = 0;

    printf("Digite um numero\n");
    scanf("%d", &n1);

    printf("Digite outro numero\n");
    scanf("%d", &n2);

    count = n1;
    count--;

    while (count < n2)
    {
        count++;

        soma += count;
    }

    printf("%d ", soma);
}
