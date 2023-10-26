#include <stdio.h>
#include <string.h>
#include <locale.h>
main()
{
    setlocale(LC_ALL, "Portuguese");

    //Declaração variável
    char nome_var, nome_vari;// string
    int xpto, xpto1, xpto2, xpto3, xpto4, xpto5, xpto6;// inteiro
    //float  xpto3, xpto4;// número real
    //double xpto5, xpto6;// mais casa decimal

    printf("Entre com o valor xpto1: \n"); //escreva
    scanf("%d",&xpto1); //leia

    printf("Entre com o valor xpto2: \n"); //escreva
    scanf("%d",&xpto2); //leia

 //   xpto1 = 10;
 //   xpto2 = 2;
    xpto = xpto1 + xpto2;
    xpto3 = xpto1 - xpto2;
    xpto4 = xpto1 * xpto2;
    xpto5 = xpto1 / xpto2;
    xpto6 = xpto1 % xpto2;



    printf("A soma de %d e %d é: %d\n\n",xpto1,xpto2,xpto);

    printf("A subtração de %d e %d é: %d\n\n",xpto1,xpto2,xpto3);

    printf("A Multiplicação de %d e %d é: %d\n\n",xpto1,xpto2,xpto4);

    printf("A Divisão de %d e %d é: %d\n\n",xpto1,xpto2,xpto5);

    printf("O resto da divisão de %d e %d é: %d\n",xpto1,xpto2,xpto6);




}
