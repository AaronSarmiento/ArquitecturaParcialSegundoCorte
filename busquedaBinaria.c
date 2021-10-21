/*
Octubre 20 de 2021
Aaron Sarmiento - Sergio Heredia
Escribir un programa en C que permita hacer una busqueda binaria
por el usuario
*/
#include<stdio.h>

main()
{
//decalracion inicial de las variables
 int *a,i,itm,s,j,flag=0,low,up,mid,temp;
 
 printf("==================================");
 printf("\nC++ Programa para hacer una busqueda binaria\n");
 printf("==================================\n");
 //se le pide al usuario que ingrese el tamaño del array
 printf("\nIngrese el tamaño del array:");
 scanf("%d",&s);
 
 a=(int*)malloc(s*sizeof(int));
 //se le pide al usuario que ingrese los elementos del array
 printf("\nIngrese los elementos del array\n");
 for(i=0;i<s;i++)
 {
 scanf("%d",&a[i]);
 }
 
 for(i=1;i<s;++i)
 {
 for(j=0;j<(s-1);++j)
 {
 if(a[j]>a[j+1])
 {
 temp = a[j];
 a[j] = a[j+1];
 a[j+1] = temp;
 }
 }
 }
 //Se le pide al usuario que ingrese el numero que quiere buscar en el array
 printf("\nIngrese el numero que quiere buscar en el Array:");
 scanf("%d",&itm);
 
 low=0;
 up=s-1;
 mid=(low+up)/2;

 
 if(itm<=a[mid])
 {
 for(i=0;i<=mid;i++)
 {
 if(a[i]==itm)
 flag=1;
 }
 }
 
 if(itm>a[mid])
 {
 for(i=mid;i<s;i++)
 {
 if(a[i]==itm)
 flag=1;
 }
 }
 
 if(flag==1)
 {
 printf("\nNumero Encontrado \n");
 }
 else 
 {
 printf("\nNo se encontró el numero \n");
 }
}