#include <stdio.h>
#include <locale.h>

int calfat(int numero)
{

    if (numero == 0 || numero == 1)
    {
        return 1;
    }
    else
    {
        int fatorial = 1;
        for (int i = 2; i <= numero; i++)
        {
            fatorial *= i;
        }
        return fatorial;
    }
}

int main()
{
    int numero = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0)
    {
        printf("Digite um número positivo.\n");
        return 1;
    }

    int resultado = calfat(numero);

    printf("O fatorial de %d é: %d\n", numero, resultado);

    return 0;
}