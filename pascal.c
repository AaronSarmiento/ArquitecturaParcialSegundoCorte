 /*
Octubre 21 de 2021
Aaron Sarmiento - Sergio Heredia 
Programa en C para imprimir el triangulo de pascal
*/
#include<stdio.h>

long fact(int);

int main()
{
    //declaracion inicial de las variables
    int contador,i,j;
//Se le pide al usuario que ingrese el numero de terminos
    printf("Ingrese el numero de terminos que desea imprimir: ");
    scanf("%d",&contador);

    for(i=0;i<contador;i++)
 {    
  printf(" ");
         for(j=0;j<=i;j++)
             printf("%ld ",fact(i)/(fact(j)*fact(i-j)));
         printf("\n");
    }
    
    return 0;
}
//function starting 
long fact(int num)
{
    long f=1;
    int i=1;
    while(i<=num)
 {
         f=f*i;
         i++;
  }
  return f;
 }