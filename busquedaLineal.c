/*
Octubre 20 de 2021
Aaron Sarmiento - Sergio Heredia
Escribir un programa en C que permita hacer una busqueda lineal
por el usuario
*/
#include<stdio.h>

main()
{
//decalracion inicial de las variables
 
 int *a,i,itm,s,flag=0;
 
 printf("==================================");
 printf("\nC++ Programa para hacer una busqueda lineal\n");
 printf("==================================\n");
 
 printf("\nIngrese el tamaño del array:");
 
 scanf("%d",&s);
 
 a=(int*)malloc(s*sizeof(int));
 
 printf("\nIngrese los elementos del Array\n");
 
 for(i=0;i<s;i++)
 {
 scanf("%d",&a[i]);
 }
 
 printf("\nIngrese el numero que quiere buscar en el array:");
 scanf("%d",&itm);
 
 for(i=0;i<s;i++)
 {
 if(a[i]==itm)
 {
 flag=1;
 }
 }
 
 if(flag==1)
 {
 printf("\nNumero encontrado \n");
 }
 else 
 {
 printf("\nNo se encontro el numero \n");
 }
}