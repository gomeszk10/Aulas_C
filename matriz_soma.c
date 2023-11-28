#include <stdio.h>
#include <locale.h>

int main()
{

    int m[4][5], v[5] = {0};

    setlocale(LC_ALL, "Portuguese_Brazil");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Digite os valores da matriz %d, %d: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    for (int j = 0; j < 5; j++)
    {
        for (int i = 0; i < 4; i++)
        {
            v[j] += m[i][j];
        }
    }

    printf("\nMatriz 4x5:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }

    for (int j = 0; j < 5; j++)
    {
        printf("Resultado da coluna %d é : %d\n", j, v[j]);
    }

    return 0;
}