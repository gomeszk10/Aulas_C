#include <stdio.h>
#include <string.h>
#include <locale.h>
main()
{
    setlocale(LC_ALL, "Portuguese");

    printf(" 1) Clientes \n 2) Fornecedores \n 3) Faturas \n\n 0) Sair \n");

    printf(" Total = 100% \n IVA   = 17% \n IRS   = 15% \n ------------- \n Liq = 68% ");

    printf("\n \"Hello World\"\n");// printf eu preciso pular a linha manual

    puts("\n \"Hello World\"");

    puts("\n\n \"Hello World\"");// puts pula a linha automático


}
