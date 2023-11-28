#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int v[7];

    for (int i = 0; i < 7; i++)
    {
        printf("Numero %d: ", i);
        scanf("%d", &v[i]);
    }
    printf("\n\nMúltiplos de 2");

    for (int i = 0; i < 7; i++)
    {
        if (v[i] % 2 == 0)
        {
            printf("\n%d", v[i]);
        }
    }

    printf("\n\nNúmeros múltiplos de 3");

    for (int i = 0; i < 7; i++)
    {
        if (v[i] % 3 == 0)
        {
            printf("\n%d", v[i]);
        }
    }

    printf("\n\nNúmeros múltiplos de 2 e 3");

    for (int i = 0; i < 7; i++)
    {
        if (v[i] % 2 == 0 && v[i] % 3 == 0)
        {
            printf("\n%d", v[i]);
        }
    }

    return 0;
}
