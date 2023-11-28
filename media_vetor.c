#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

float main()
{
    float n[5];
    float media;
    float soma;

    setlocale(LC_ALL, "Portuguese_Brazil");

    for (int i = 0; i < 6; i++)
    {
        printf("Digite a nota %d:", i);
        scanf("%f", &n[i]);
        soma += n[i];
    }

    for (int i = 0; i < 6; i++)
    {
        printf("\nAs notas digitadas são %d: %.1f ", i, n[i]);
    }

    media = soma / 6;
    printf("\nA média é: %.1f", media);

    return 0;
}