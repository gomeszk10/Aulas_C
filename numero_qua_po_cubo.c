#include <stdio.h>
#include <math.h>
#include <locale.h>

double main()
{
    setlocale(LC_ALL, "Portuguese");

    double n,cubo,quadrado,raiz;

    printf("Digite um valor: ");
    scanf("%lf",&n);

    cubo = pow(n,3);
    quadrado = pow(n,2);
    raiz = sqrt(n);

    printf("\nO quadrado do número é: %.2lf ", quadrado);

    printf("\nO cubo do número é: %.2lf ", cubo);

    printf("\nA raiz do número é: %.2lf ", raiz);

    return 0;


}
