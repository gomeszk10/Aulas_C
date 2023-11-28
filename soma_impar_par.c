#include <stdio.h>

int main()
{
    int numeros[10];
    int somap = 0;
    int somai = 0;

    printf("Digite os 10 numeros:\n");

    for (int i = 1; i < 11; i++)
    {
        printf("Numero %d: ", i);
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0)
        {
            somap += numeros[i];
        }

        else
        {
            somai += numeros[i];
        }
    }

    printf("\nA soma dos numeros pares sao: %d", somap);
    printf("\nA soma dos numeros impares sao: %d", somai);
}