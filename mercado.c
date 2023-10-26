#include <stdio.h>
#include <locale.h>
#include <math.h>

// tipo de partida
float main()
{
    // língua desejada
    setlocale(LC_ALL, "Portuguese_Brazil");

    float precoatual, aumento, diminuicao, venda, preco, total;

    printf(" | Venda media mensal                   |      Preço atual       |    %% Aumento    |   %% de diminuição |\n | < 500                                |        <30,00          |        10       |         -         | \n | >=500 e < 1200                       |      >=30 e < 80       |        15       |         -         |\n | >=1200                               |        >=80            |        -        |        20         |\n\n");

    printf("\nDigite as vendas:  ");
    scanf("%f", &venda);

    printf("\nDigite o preço:  ");
    scanf("%f", &preco);

    if (venda < 500 || preco < 30.00)
    {
        aumento = preco * 0.10;
        total = preco + aumento;
        printf("\nO produto terá um aumento de 10%% que será:  %4.f + %4.f = %4.f ", preco, aumento, total);
    }

    if (venda >= 500 && venda < 1200 || preco >= 30 && preco < 80)
    {
        aumento = preco * 0.15;
        total = preco + aumento;
        printf("\nO produto terá um aumento de 15%% que será:  %4.f + %4.f = %4.f ", preco, aumento, total);
    }

    if (venda >= 1200 || preco >= 80)
    {
        aumento = preco * 0.20;
        total = preco - aumento;
        printf("\nO produto terá uma diminuição de 20%% que será:  %4.f - %4.f = %4.f ", preco, aumento, total);
    }
}
