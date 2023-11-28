#include <stdio.h>
#include <locale.h>

int main()
{
    double cpf;
    int dependente;
    float renda, total, totald, basecal1, basecal, irrf;

    setlocale(LC_ALL, "Portuguese_Brazil");

    printf("Digite seu cpf: ");
    scanf("%lf", &cpf);

    printf("Digite o número de dependentes: ");
    scanf("%d", &dependente);

    printf("Digite a renda mensal: ");
    scanf("%f", &renda);

    // INSS

    totald = 189.59 * dependente;

    if (renda <= 1302.00)
    {
        basecal1 = renda * 0.075;
        totald = renda - basecal1;
    }
    else if (renda <= 2571.29)
    {
        basecal1 = (renda * 0.09) - 19.53;
        totald = renda - basecal1;
    }
    else if (renda <= 3856.94)
    {
        basecal1 = (renda * 0.12) - 96.67;
        totald = renda - basecal1;
    }
    else if (renda <= 7507.49)
    {
        basecal1 = (renda * 0.14) - 173.80;
        totald = renda - basecal1;
    }
    else if (renda >= 7507.50)
    {
        totald = renda - 877.22;
    }

    basecal = totald - (189.59 * dependente);

    // IRRF

    if (basecal <= 1903.98)
    {
        irrf = 0;
    }

    else if (basecal <= 2826.65)
    {
        irrf = basecal * 0.075 - 142.80;
    }
    else if (basecal <= 3751.05)
    {
        irrf = basecal * 0.15 - 354.80;
    }
    else if (basecal <= 4664.67)
    {
        irrf = basecal * 0.225 - 636.13;
    }
    else if (basecal > 4664.68)
    {
        irrf = basecal * 0.275 - 869.36;
    }

    // resultado

    total = totald - irrf;

    printf("\nO salário (descontando INSS e IRRF): %.2f - %.2f - %.2f = %.2f", renda, basecal1, irrf, total);

    return 0;
}