#include <stdio.h>
#include <string.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");

    int n1,n2,n3,media;


    printf("Digite a nota 1: \n ");
    scanf("%d", &n1);

    printf("Digite a nota 2: \n ");
    scanf("%d", &n2);

    printf("Digite a nota 3: \n ");
    scanf("%d", &n3);

    media = (n1+n2+n3)/3;

    printf("As notas do aluno foram n1=%d n2=%d n3=%d e a média foi de: %d: ",n1,n2,n3,media);







}
