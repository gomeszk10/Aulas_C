#include <stdio.h>

int main()
{
    int pessoas = 5;
    int mais_50 = 0;
    float soma_10_20_anos = 0;
    int alturas_10_20_anos = 0;
    int peso_inferior_40kg = 0;

    for (int i = 1; i <= pessoas; i++)
    {
        int n;
        float a,p;

        printf("\nDados da pessoa %d: \n", i);

        printf("Idade: ");
        scanf("%d", &n);

        printf("Altura: ");
        scanf("%f", &a);

        printf("Peso: ");
        scanf("%f", &p);

        if (n > 50)
        {
            mais_50++;
        }

        if (n >=10 && n<=20)
        {
            alturas_10_20_anos += a;
            soma_10_20_anos++;
        }
        
        if (p<40)
        {
           peso_inferior_40kg++;
        }
    }

    printf("A quantidade de pessoas com mais de 50 sao: %d\n ", mais_50);

    if (alturas_10_20_anos > 0)
    {
        float media_altura = alturas_10_20_anos / soma_10_20_anos;
        printf("A media de altura de pessoas entre 10 a 20 anos sao: %f\n", media_altura);
    }
    else {
        printf("Nenhuma pessoa encontrada entre 10 a 20 anos\n");
    }

    if (pessoas > 0)
    {
       float mediapeso = ((float)peso_inferior_40kg / pessoas) * 100;
       printf("A porcentagem de pessoas com menos de 40kg sao: %.2f%%\n ", mediapeso);
    }

    else
    {
        printf("Nenhuma pessoa inferior a 40kg encontrada\n");
    }
    
}