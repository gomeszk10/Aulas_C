// incluidos no software
#include <stdio.h>
#include <string.h>
#include <locale.h>

// tipo de partida 
int main()
{
    // língua desejada
    setlocale(LC_ALL, "Portuguese_Brazil");

    char imposto,novosalario, classificacao,opcao,opcao1,opcao2,opcao3;
    float salario,imp5,imp10,imp15,novosal;

    int i = 0;

    printf("2Carregando");
    while (i++ < 5)
    {
        Sleep(230); // Sleep 1 segundo
        printf(".");
    }

    imposto == 1;

    novosalario == 2;

    classificacao == 3;

        printf("\n\nDigite a opção desejada:\n 1 - IMPOSTO\n 2 - Novo Salário\n 3 - Classificação\n ");
        scanf("%c",&opcao);
 
    switch(opcao)
    {
        case'1': printf(" \nOpção desejada Imposto\n ");
        break;

        case'2': printf(" \nOpção desejada NovoSalário\n ");
        break;

        case'3': printf(" \nOpção desejada Classificação\n ");

    }

    if (opcao=='1') 
    {
        printf("\nSalário          |  Percentual de Imposto \n Menor de 500,00   |            5%%\n De 500,00 a 850,00|            10%%\n Acima de 850      |            15%%\n");

            printf("Digite o valor do seu salário: ");
            scanf("%f", &salario);

            if (salario<500)
            {
                imp5 = salario * 0.05;
                novosal = salario - imp5;
                printf("\n O seu salário com impostos de 5%% é igual: %4.f - %4.f = %4.f", salario,imp5,novosal,"\n");
                
            }

            if (salario<=850 && salario>=500 )
            {
                imp10 = salario * 0.10;
                novosal = salario - imp10;
                printf("\n O seu salário com impostos de 10%% é igual: %4.f - %4.f = %4.f", salario,imp10,novosal,"\n");
                
            }
            
            if (salario>850)
            {
                imp15 = salario * 0.15;
                novosal = salario - imp15;
                printf("\n O seu salário com impostos de 15%% é igual: %4.f - %4.f = %4.f", salario,imp15,novosal, "\n");
                
            }
                
    }

    if (opcao=='2')
    {
        printf("Salário                    |   Aumento\n Maior que 1500              |    25,00\n De 750,00 a 1500,00         |    50,00\n De 450,00 a 750,00          |    75,00\n Menor que 450,00            |    100,00   ");

            printf("\nDigite o valor do seu salário:\n ");
            scanf("%f", &salario);

            if (salario>1500)
                {
                    imp5 = 25;
                    novosal = salario + imp5;
                    printf("\n O seu salário com o aumento é igual: %4.f + %4.f = %4.f", salario,imp5,novosal,"\n");
                    
                }

                if (salario<=1500 && salario>750)
                {
                    imp5 = 50;
                    novosal = salario + imp5;
                    printf("\n O seu salário com o aumento é igual: %4.f + %4.f = %4.f", salario,imp5,novosal,"\n");
                    
                }

                if (salario<=750 && salario>=450)
                {
                    imp5 = 75;
                    novosal = salario + imp5;
                    printf("\n O seu salário com o aumento é igual: %4.f + %4.f = %4.f", salario,imp5,novosal,"\n");
                    
                }

                if (salario<=450)
                {
                    imp5 = 100;
                    novosal = salario + 100;
                    printf("\n O seu salário com o aumento é igual: %4.f + %4.f = %4.f", salario,imp5,novosal,"\n");
                    
                }

    }

    if (opcao=='3')
    {
        printf("Até 700,00       | Mal remunerado \n Maior que 700,00 | Bem remunerado");

            printf("\n\nDigite o valor do seu salário: ");
            scanf("%f", &salario);

            if (salario<=700)
            {
                printf("Mal remunerado");
            }
            
            if (salario>700)
            {
                printf("\nBem remunerado");
            }
            
    }
}