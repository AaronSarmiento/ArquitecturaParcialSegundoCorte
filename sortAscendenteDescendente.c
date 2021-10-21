/*
Octubre 21 de 2021
Aaron Sarmiento - Sergio Heredia 
Programa en C para organizar valores en ordenascendente y descendente
*/
#include<stdio.h>

int main()
{
    //declaracion inicial de las variables
  int array[100], n, c, d, swap;
//se pide al usuario que ingrese el numero de elementos
  printf("Ingrese el numero de elementos\n");
  scanf("%d", &n);

  printf("Ingrese %d enteros\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1])
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }

  printf("Lista ordenada en orden ascendente:\n");

  for ( c = 0 ; c < n ; c++ )
     printf("%d\n", array[c]);

  printf("\nLista ordenada en orden descendente:\n");

  for ( c = n-1 ; c >= 0; c-- )
     printf("%d\n", array[c]);
  return 0;
}