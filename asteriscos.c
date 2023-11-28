#include <stdio.h>

int i,j,n;

main(){

printf("Digite os asteriscos desejados ");
scanf("%d",&n);

for (int i = 1; i <= n ;i++)
{
  for (int j = 1; j <= i ;j++)
  {
    printf("*");
  }
  printf("\n");
}

}