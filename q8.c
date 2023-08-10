#include <stdio.h>

int main()
{

    int x, area, base, altura, lado;
    printf("1 - área do triangulo equilatero. \n2 - área do quadrado.\n3 - área do retângulo.\n0 - Sair. ");

    scanf("%d", &x);

    while (x != 0)
    {

        if (x == 1)
        {
            printf("Digite a altura: \n");
            scanf("%d", &altura);
            printf("Digite a base: \n");
            scanf("%d", &base);
            area = (base * altura) / 2;
            printf("A area desse triangulo é: %d \n", area);
            printf("1 - área do triangulo equilatero. \n2 - área do quadrado.\n3 - área do retângulo.\n0 - Sair. ");
            scanf("%d", &x);
        }

        else if (x == 2)
        {
            printf("Digite o lado do quadrado: \n");
            scanf("%d", &lado);
            area = lado * lado;
            printf("A area desse quadrado é: %d \n", area);
            printf("1 - área do triangulo equilatero. \n2 - área do quadrado.\n3 - área do retângulo.\n0 - Sair. ");
            scanf("%d", &x);
        }

        else if (x == 3)
        {
            printf("Digite a base do retangulo: ");
            scanf("%d", &base);
            printf("Digite a altura do retangulo: ");
            scanf("%d", &altura);

            area = base * altura;
            printf("A area desse retangulo é: %d \n", area);

            printf("1 - área do triangulo equilatero. \n2 - área do quadrado.\n3 - área do retângulo.\n0 - Sair. ");
            scanf("%d", &x);
        }
        
        else
        {
            printf("Digito inválido, insira uma das opções disponíveis.\n");
            printf("1 - área do triangulo equilatero. \n2 - área do quadrado.\n3 - área do retângulo.\n0 - Sair. ");
            scanf("%d", &x);
        }
    }

    return 0;
}