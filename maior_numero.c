// incluidos no software
#include <stdio.h>
#include <string.h>
#include <locale.h>

// tipo de partida 
float main()
{
    // l�ngua desejada
    setlocale(LC_ALL, "Portuguese_Brazil");

    // tipo/vari�veis
    float n1,n2;

    // escreve/digite a var n1
    printf("\nEscreva o n1: ");
        scanf(" %f", &n1);

    // escreve/digite a var n2
     printf("\nEscreva o n2: ");
        scanf(" %f", &n2);

    // se n1 � maior que n2, aparece que n1 � maior que n2
    if (n1>n2)
    {
        printf(" \n n1= %2.f � maior que n2= %2.f ", n1, n2  );
    }
    // n2 � maior que n1, aparece que n2 � maior que n1
    else
    {
        printf("\n n2= %2.f � maior que n1= %2.f", n2, n1);
    }
    
    //retorno 0 
    return 0;

}