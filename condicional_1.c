#include <stdio.h> // para usar o printf
#include <locale.h> // usar português
#include <math.h> // matemática

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int xpto;
    printf("Entre com um valor:\n ");
    scanf("%d",&xpto);

    printf("\n<<<<< Condicional simples ==========\n");
    if (xpto >=0)
    {
        printf("Valor positivo\n");
    }

    else
        {
        printf("Valor negativo\n");
        }


    printf("\n============= Condicional Composto ===========\n");
    if (xpto >=0)
    {
        printf("Valor positivo\n");
    }

    else
    {
        printf("Valor negativo\n");
    }

    printf("\n ===== Condicional Composto com mais de 1 instrumento =========\n");

    if (xpto >= 0)
    {
        printf("Valor positivo\n");
        printf("Você digitou o valor %d: ", xpto);
    }

    else
    {
        printf("Valor negativo\n");
        printf("Você digitou o valor: %d ", xpto);
    }


    printf("\n =========== Estado =================\n"); // Fazer solo

    char estado;

    printf("Digite o seu estado civil; Casado,C , Divorciado,D , Solteiro,S , Viúvo,V : \n");
    scanf("%c", &estado);

    switch(estado)
    {
        case 'c':printf("Casado");
                break;

        case 'd':printf("Divorciado");
                break;

        case 's':printf("Solteiro");
                break;

        case 'v':printf("Viúvo");
                break;

        default: printf("Estado civil não identificado");
    }
}
