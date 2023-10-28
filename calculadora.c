#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <string.h>


int main()
{
    setlocale(LC_ALL, "Portuguese");

    char opcao;

    printf("Digite a conta desejada\n 1- Adição\n 2- Subtração\n 3- Multiplicação\n 4- Divisão\n 5- Tabuáda\n 6- Raiz quadrada\n\n");
    scanf(" %c", &opcao);

    switch (opcao)
    {
    case '1':{ 

        printf("Opção desejada Adição\n\n");
        int n1,n2,resul;

        printf("\n\nDigite o n1:");
        scanf(" %d", &n1);

        printf("\n\nDigite o n1:");
        scanf(" %d", &n2);
        resul=n1+n2;

        printf("O resultado da soma é: %d", resul);
    }
        break;

    case '2':
    { 

        printf("Opção desejada Subtração\n\n");
        int n1,n2,resul;

        printf("\n\nDigite o n1:");
        scanf("%d", &n1);

        printf("\n\nDigite o n1:");
        scanf("%d", &n2);

        resul=n1-n2;

        printf("O resultado da subtração é: %d\n\n", resul);
    }
        break;

    case '3':
{ 
        printf("Opção desejada Multiplicação\n\n");
        int n1, n2, resul;

        printf("\n\nDigite o primeiro número:");
        scanf("%d", &n1);

        printf("\n\nDigite o segundo número:");
        scanf("%d", &n2);

         resul = n1 * n2;

        printf("O resultado da multiplicação é: %d\n\n", resul);
}
        break;

    case '4':
{ 
        printf("\n\nOpção desejada divisão");
        int n1, n2, resul;

        printf("\n\nDigite o dividendo:");
        scanf("%d", &n1);

        printf("\n\nDigite o divisor:");
        scanf("%d", &n2);

          resul = n1 / n2;

        printf("O resultado da soma é: %d\n\n", resul);
}
        break;

    case '5':

        printf("\n\nOpção desejada Tabuáda");
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
        printf("\n\nOpção desejada raiz quadrada");
        int n,raiz;

        printf("\n\nDigite a raiz do número desejado:");
        scanf("%d", &n);

        raiz=sqrt(n);

        printf("O resultado da soma é: %d\n\n", raiz);
}
        break;

    default:
        printf("Caracter não identificado\n\n");
        break;
    }
}