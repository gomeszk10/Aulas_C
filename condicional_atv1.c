#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float n1,n2;

    printf(" Entre com o valor 1:\n ");
    scanf("%f",&n1);

    printf(" Entre com o valor 2:\n ");
    scanf("%f",&n2);

    if(n1>n2)
    {
        printf("O n1 = %n1 é maior \n", n1);
    }
    else
    {
        printf("O n2 = %n2 é maior \n", n2 );
    }

    return 0 ;
}
