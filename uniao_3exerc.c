#include <stdio.h> // printf...
#include <string.h> // caracters
#include <locale.h> // l�ngua
#include <math.h> // matem�tica
#include <windows.h> // sleep

int main()
{

    setlocale(LC_ALL, "Portuguese_Brazil");

    char opcao;
    int i = 0;

    printf("Carregando");

    while (i++ < 5)
    {
        Sleep(230);
        printf(".");
    }

    printf("\n1- Maior N�mero\n2- Mercado\n3- Menu Condicional\n");
    scanf("%c", &opcao);

    switch (opcao)
    {
    case '1':

        printf("\n\nOp��o desejada maior n�mero\n");

        float n1, n2, dif, dif2;

        printf("\n\nDigite o n1: ");
        scanf("%f", &n1);

        printf("\n\nDigite o n2: ");
        scanf("%f", &n2);

        if (n1 > n2)
        {
            dif = n1 - n2;
            printf("\n\n%2.f � maior que %2.f a diferen�a � de %2.f: ", n1, n2, dif);
        }

        else if (n2 > n1)
        {
            dif2 = n2 - n1;
            printf("\n\n%2.fn2 � maior que %2.fn1 a diferen�a � de %2.f:", n2, n1, dif2);
        }

        else
        {
            printf("Os dois n�meros s�o iguais: %2.f e %2.f", n1, n2);
        }
        break;

    case '2':
        printf("\n\nOp��o desejada Mercado\n");

        float preco, venda;

        printf("\n\n | Venda media mensal                   |      Pre�o atual      |     %% Aumento   |  %% de diminui��o|\n | < 500                                |        <30,00          |        10       |         -         | \n | >=500 e < 1200                       |      >=30 e < 80       |        15       |         -         |\n | >=1200                               |        >=80            |        -        |        20         |\n\n");

        printf("\nDigite as vendas:  ");
        scanf("%f", &venda);

        printf("\nDigite o pre�o:  ");
        scanf("%f", &preco);

        if (venda < 500 || preco < 30.00)
        {
            float aumento = preco * 0.10;
            float total = preco + aumento;
            printf("\nO produto ter� um aumento de 10%% que ser�:  %4.f + %4.f = %4.f ", preco, aumento, total);
        }

        if (venda >= 500 && venda < 1200 || preco >= 30 && preco < 80)
        {
            float aumento = preco * 0.15;
            float total = preco + aumento;
            printf("\nO produto ter� um aumento de 15%% que ser�:  %4.f + %4.f = %4.f ", preco, aumento, total);
        }

        if (venda >= 1200 || preco >= 80)
        {
            float aumento = preco * 0.20;
            float total = preco - aumento;
            printf("\nO produto ter� uma diminui��o de 20%% que ser�:  %4.f - %4.f = %4.f ", preco, aumento, total);
        }

        break;

    case '3':

        printf("Op��o desejada menu condicional\n");

        char subop;
        float salario;

        printf("\n1- Imposto\n2- Novo Sal�rio\n3- Classifica��o\n");
        scanf(" %c", &subop);

        switch (subop)
        {
        case '1':
            printf("\n\nOp��o desejada Imposto:\n\n");

            printf("\n Sal�rio           |  Percentual de Imposto \n Menor de 500,00   |            5%%\n De 500,00 a 850,00|            10%%\n Acima de 850      |            15%%\n");

            printf("\n\nDigite o valor do seu sal�rio: ");
            scanf("%f", &salario);

            if (salario < 500)
            {
                float imp5 = salario * 0.05;
                float novosal = salario - imp5;
                printf("\n O seu sal�rio com impostos de 5%% � igual: %4.f - %4.f = %4.f", salario, imp5, novosal, "\n");
            }

            if (salario <= 850 && salario >= 500)
            {
                float imp10 = salario * 0.10;
                float novosal = salario - imp10;
                printf("\n O seu sal�rio com impostos de 10%% � igual: %4.f - %4.f = %4.f", salario, imp10, novosal, "\n");
            }

            if (salario > 850)
            {
                float imp15 = salario * 0.15;
                float novosal = salario - imp15;
                printf("\n O seu sal�rio com impostos de 15%% � igual: %4.f - %4.f = %4.f", salario, imp15, novosal, "\n");
            }

            break;
        case '2':
            printf("\n\nOp��o desejada Novo Sal�rio\n\n");

            printf(" Sal�rio                     |    Aumento\n Maior que 1500              |    25,00\n De 750,00 a 1500,00         |    50,00\n De 450,00 a 750,00          |    75,00\n Menor que 450,00            |    100,00   ");

            printf("\n\nDigite o valor do seu sal�rio:  ");
            scanf("%f", &salario);

            if (salario > 1500)
            {
                float imp5 = 25;
                float novosal = salario + imp5;
                printf("\n O seu sal�rio com o aumento � igual: %4.f + %4.f = %4.f", salario, imp5, novosal, "\n");
            }

            if (salario <= 1500 && salario > 750)
            {
                float imp5 = 50;
                float novosal = salario + imp5;
                printf("\n O seu sal�rio com o aumento � igual: %4.f + %4.f = %4.f", salario, imp5, novosal, "\n");
            }

            if (salario <= 750 && salario >= 450)
            {
                float imp5 = 75;
                float novosal = salario + imp5;
                printf("\n O seu sal�rio com o aumento � igual: %4.f + %4.f = %4.f", salario, imp5, novosal, "\n");
            }

            if (salario <= 450)
            {
                float imp5 = 100;
                float novosal = salario + 100;
                printf("\n O seu sal�rio com o aumento � igual: %4.f + %4.f = %4.f", salario, imp5, novosal, "\n");
            }

            break;
        case '3':
            printf("\n\nOp��o desejada Classifica��o\n\n");

            printf("\n At� 700,00       | Mal remunerado\n Maior que 700,00 | Bem remunerado\n");

            printf("\n\nDigite o valor do seu sal�rio: ");
            scanf(" %f", &salario);

            if (salario <= 700)
            {
                printf("\n\nMal remunerado");
            }
            else
            {
                printf("\n\nBem remunerado");
            }
            break;

        default:
            printf("\n\nCaracter n�o identificado");
            break;
        }
    }
}
