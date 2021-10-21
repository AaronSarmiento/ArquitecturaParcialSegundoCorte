 /*
Octubre 21 de 2021
Aaron Sarmiento - Sergio Heredia 
Programa en C para realizar suma con punteros
*/
#include <stdio.h>
int main()
{
    //declaracion inicial de las variables
   int numero1, numero2, *p, *q, suma;
// Se pide al usuario que ingrese los numeros
   printf("Ingrese dos numeros\n");
   scanf("%d%d", &numero1, &numero2);

   p = &numero1;
   q = &numero2;
//Se realizan los calculos
   suma = *p + *q;
//Salida de datos
   printf("Suma = %d\n", suma);

   return 0;
}