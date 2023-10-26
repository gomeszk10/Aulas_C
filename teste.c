[13:39] SILAS CASTRO LIMA

#include<stdio.h>

#include<math.h>



void main()

{



//Tipos de variáveis

int xpto =5;

printf("O conteúdo da variável e : %d",xpto);



int xpto1 = 10;

printf("O conteúdo da variável e : %d - %d\n ",xpto,xpto1);



//sizeof é um operador que indica a dimensão de um tipo de variável

printf("O tamanho em bytes de um char :%d\n",sizeof(char));

printf("O tamanho em bytes de um int :%d\n",sizeof(int));

printf("O tamanho em bytes de um float :%d\n",sizeof(float));

printf("O tamanho em bytes de um double :%d\n",sizeof(double));



return;

short int xpto;

long int xpto1 ;



}


[15:19] SILAS CASTRO LIMA

#include<stdio.h>

#include<math.h>



void main()

{

    /* Tipos de variáveis

//int xpto =5;

//printf("O conteúdo da variável e : %d",xpto);



int xpto1 = 10;

printf("O conteúdo da variável e : %d - %d\n ",xpto,xpto1);



sizeof é um operador que indica a dimensão de um tipo de variável

printf("O tamanho em bytes de um char :%d\n",sizeof(char));

printf("O tamanho em bytes de um int :%d\n",sizeof(int));

printf("O tamanho em bytes de um float :%d\n",sizeof(float));

printf("O tamanho em bytes de um double :%d\n",sizeof(double));





short int xpto;

long int xpto1 ;

printf("O tamanho em bytes de um short int:%d\n",sizeof(xpto));

printf("O tamanho em bytes de um long int:%d\n",sizeof(xpto1));



printf("Short int");

scanf("%hd",&xpto);



printf("long int");

scanf("%ld",&xpto);

return;

unsigned int xpto2;

printf("Inteiro sem sinal : " );

scanf( "%d" , valor);



float valor ;

double valor1;



printf("Entre com um valor float: " );

scanf( "%f" ,&valor);



printf("Entre com um valor double: " );

scanf( "%lf" ,&valor1);





printf("%.2f\n ", valor );

printf("%.f\n" , valor1); */





double raiz  , valor,valor1 ;

//raiz

printf(" Digite um valor :");

scanf("%lf" , &raiz);



valor =sqrt(raiz) ;



printf("O valor da raiz e : %.2f",valor);



//calculo de potência



printf("\n\n===================");

printf("\n Pontencia");

valor1 = pow(2,3);

printf("\n\n O valor da potência e: %.2f",valor1);



return 0 ;



}









