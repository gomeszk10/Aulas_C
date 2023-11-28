#include <stdio.h>
#include <locale.h>

int main()
{

    int m[2][2], maiorelemento, resultado;

    setlocale(LC_ALL, "Portuguese_Brazil");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Digite o valor da matriz %d %d: ", i, j);
            scanf("%d", &m[i][j]);

            if (i == 0 && j == 0)
            {
                maiorelemento = m[i][j];
            }
            else
            {
                if (m[i][j] > maiorelemento)
                {
                    maiorelemento = m[i][j];
                }
            }
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            resultado = m[i][j] * maiorelemento;
            printf("Resultado = %d * %d =  %d\n", maiorelemento, m[i][j], resultado);
        }
    }

    return 0;
}