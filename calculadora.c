#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <string.h>


int main()
{
    setlocale(LC_ALL, "Portuguese");

    char opcao;

    printf("Digite a conta desejada\n 1- Adi��o\n 2- Subtra��o\n 3- Multiplica��o\n 4- Divis�o\n 5- Tabu�da\n 6- Raiz quadrada\n\n");
    scanf(" %c", &opcao);

    switch (opcao)
    {
    case '1':{ 

        printf("Op��o desejada Adi��o\n\n");
        int n1,n2,resul;

        printf("\n\nDigite o n1:");
        scanf(" %d", &n1);

        printf("\n\nDigite o n1:");
        scanf(" %d", &n2);
        resul=n1+n2;

        printf("O resultado da soma �: %d", resul);
    }
        break;

    case '2':
    { 

        printf("Op��o desejada Subtra��o\n\n");
        int n1,n2,resul;

        printf("\n\nDigite o n1:");
        scanf("%d", &n1);

        printf("\n\nDigite o n1:");
        scanf("%d", &n2);

        resul=n1-n2;

        printf("O resultado da subtra��o �: %d\n\n", resul);
    }
        break;

    case '3':
{ 
        printf("Op��o desejada Multiplica��o\n\n");
        int n1, n2, resul;

        printf("\n\nDigite o primeiro n�mero:");
        scanf("%d", &n1);

        printf("\n\nDigite o segundo n�mero:");
        scanf("%d", &n2);

         resul = n1 * n2;

        printf("O resultado da multiplica��o �: %d\n\n", resul);
}
        break;

    case '4':
{ 
        printf("\n\nOp��o desejada divis�o");
        int n1, n2, resul;

        printf("\n\nDigite o dividendo:");
        scanf("%d", &n1);

        printf("\n\nDigite o divisor:");
        scanf("%d", &n2);

          resul = n1 / n2;

        printf("O resultado da soma �: %d\n\n", resul);
}
        break;

    case '5':

        printf("\n\nOp��o desejada Tabu�da");
        int n,t;

        printf("\n\nDigite a tabuada desejada:");
        scanf("%d", &n);

        for (int i = 0; i < 10; i++)
        {
            t = n * i;
            printf("%d x %i = %i\n ", n, i, t);
        }

        break;
       
        case '6':
{ 
        printf("\n\nOp��o desejada raiz quadrada");
        int n,raiz;

        printf("\n\nDigite a raiz do n�mero desejado:");
        scanf("%d", &n);

        raiz=sqrt(n);

        printf("O resultado da soma �: %d\n\n", raiz);
}
        break;

    default:
        printf("Caracter n�o identificado\n\n");
        break;
    }
}