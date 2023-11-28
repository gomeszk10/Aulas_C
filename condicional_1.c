#include <stdio.h> // para usar o printf
#include <locale.h> // usar portugu�s
#include <math.h> // matem�tica

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
        printf("Voc� digitou o valor %d: ", xpto);
    }

    else
    {
        printf("Valor negativo\n");
        printf("Voc� digitou o valor: %d ", xpto);
    }


    printf("\n =========== Estado =================\n"); // Fazer solo

    char estado;

    printf("Digite o seu estado civil; Casado,C , Divorciado,D , Solteiro,S , Vi�vo,V : \n");
    scanf("%c", &estado);

    switch(estado)
    {
        case 'c':printf("Casado");
                break;

        case 'd':printf("Divorciado");
                break;

        case 's':printf("Solteiro");
                break;

        case 'v':printf("Vi�vo");
                break;

        default: printf("Estado civil n�o identificado");
    }
}
