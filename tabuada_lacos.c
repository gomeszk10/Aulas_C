#include <stdio.h>

int main()
{

    char xpoto;

    printf("Digite o laço desejado\n\n 1- Do while\n\n 2 - While\n\n 3 - For\n\n");
    scanf(" %c", &xpoto);

    switch (xpoto)
    {
    case '1':
    {

        printf("Opcao desejada Do while\n\n\n ");

        int n, i, r;
        printf("Digite a tabuada desejada:\n\n ");
        scanf("%d", &n);

        i = 0;

        do
        {
            r = n * i;
            printf("%d x %d = %d\n\n", n, i, r);
            i++;
        } while (i <= 10);

        return 0;
    }
    break;

    case '2':
    {

        printf("Opcao desejada while\n\n\n ");

        int n, i, r;
        printf("Digite a tabuada desejada:\n\n ");
        scanf("%d", &n);

        i = 0;

        while (i <= 10)
        {
            r = n * i;
            printf("%d x %d = %d\n\n", n, i, r);
            i++;
        }

        return 0;
    }
    break;

    case '3':
    {

        printf("\n\nOpcao desejada For\n ");

        int n, i, r;
        printf("\nDigite a tabuada desejada:");
        scanf("%d", &n);

        for (i = 0; i <= 10; i++)
        {
            r = n * i;
            printf("\n%d x %d = %d\n\n", n, i, r);
        }

        return 0;
    }

    break;

    default:
        printf("Comando não identificado");
        break;
    }
}