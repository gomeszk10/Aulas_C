#include <stdio.h>
#include <locale.h>

float Calmedia()
{
    float total = 0;
    int quantidade = 0;

    setlocale(LC_ALL, "Portuguese_Brazil");

    while (1)
    {
        float valor;
        printf("Digite um valor (ou 0 para encerrar): ");
        scanf("%f", &valor);

        if (valor == 0)
        {
            break;
        }

        if (valor > 0)
        {
            total += valor;
            quantidade++;
        }

        else
        {
            printf("Digite apenas números positivos.\n");
        }
    }

    if (quantidade > 0)
    {
        return total / quantidade;
    }

    else
    {
        printf("Nenhum valor positivo foi inserido.\n");
        return 0;
    }
}

int main()
{
    float media = Calmedia();
    printf("A média dos valores positivos é: %.2f\n", media);

    return 0;
}