#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int v[6], somap = 0, somai = 0;

    for (int i = 0; i < 6; i++)
    {
        printf("Numero %d: ", i);
        scanf("%d", &v[i]);

        if (v[i] % 2 == 0)
        {
            somap++;
        }

        else
        {
            somai++;
        }
    }
    printf("\n\nNúmeros pares");

    for (int i = 0; i < 6; i++)
    {
        if (v[i] % 2 == 0)
        {
            printf("\n%d", v[i]);
        }
    }

    printf("\nA quantidade de números pares são: %d ", somap);

    printf("\n\nNúmeros impares");

    for (int i = 0; i < 6; i++)
    {
        if (v[i] % 2 != 0)
        {
            printf("\n%d", v[i]);
        }
    }
    printf("\nA quantidade de números impares são: %d ", somai);

    return 0;
}