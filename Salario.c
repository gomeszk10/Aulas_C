#include <stdio.h>
#include <string.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");

    double  salario,conta,aumento;

    printf("Digite o salário R$:");
    scanf("%d",&salario);


    conta = salario * 0.25;

    aumento = salario + conta;

    printf("O salário é R$%2.d e o aumento de 25%% foi de %d o total é de: %2.d ", salario,conta,aumento);


    return 0;

}
