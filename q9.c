#include <stdio.h>

/*Sequencia de Fibonacci*/
/* 1 2 3 4 5 6 7 */
/* 0 1 1 2 3 5 8 */

void main()
{
    int i, n, n1 = 0, n2 = 1, proximo;

    printf("Informe a posição do termo: ");
    scanf("%d", &n);
   
    for (i = 1; i < n; i++)
    {
        proximo = n1 + n2;
        n1 = n2;
        n2 = proximo;
    }

    printf("O %dº termo da sequência de fibonacci é: %d", n, n1);
}