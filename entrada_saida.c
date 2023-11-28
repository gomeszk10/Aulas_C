#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){

setlocale(LC_ALL, "Portuguese_Brazil");

int n[9];

//entrada
for (int i = 0; i < 9; i++)
{
    printf("Digite o n %d: ", i);
    scanf("%d", &n[i]);
}

//saida
for (int i = 0; i < 9; i++)
{
   printf("\nOs números digitados são: %d",n[i]);
}

}