#include <stdio.h>
#include <locale.h>

int main(){

   float v1[4],v2[4];
   float somav1, somav2, total;

     setlocale(LC_ALL, "Portuguese_Brazil");

    printf("Digite os números do vetor1\n\n");
    
      for (int i = 1; i < 6; i++)
    {
        printf("Digite os números  %d:", i);
        scanf("%f", &v1[i]);
        somav1 += v1[i];
    }

     printf("\n\nDigite os números do vetor2\n\n");
    
      for (int j = 1; j < 6; j++)
    {
        printf("Digite os números  %d:", j);
        scanf("%f", &v2[j]);
        somav2 += v2[j];
    }

        for (int i = 1; i < 6; i++)
    {
        printf("\nOs números digitados no vetor1 %d: %.1f ", i, v1[i]);
    }

        printf("\n");
        printf("\n");

            for (int j = 1; j < 6; j++)
    {
        printf("\nOs números digitados no vetor2 %d: %.1f ", j, v2[j]);
    }

    total = somav1 + somav2;

    printf("\n\nA soma dos dois vetores é: %.3f", total);


}