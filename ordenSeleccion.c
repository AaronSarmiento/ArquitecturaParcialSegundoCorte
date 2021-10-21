/*
Octubre 21 de 2021
Aaron Sarmiento - Sergio Heredia 
Programa en C para organizar valores 
*/
#include <stdio.h>

int main()
{
  int array[100], n, c, d, position, t;

  printf("Ingrese el numero de elementos: \n");
  scanf("%d", &n);

  printf("Ingrese %d enteros: \n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  for (c = 0; c < (n - 1); c++) // buscando el elmento minimo (n-1) veces
  {
    position = c;

    for (d = c + 1; d < n; d++)
    {
      if (array[position] > array[d])
        position = d;
    }
    if (position != c)
    {
      t = array[c];
      array[c] = array[position];
      array[position] = t;
    }
  }

  printf("Lista ordenada:\n");

  for (c = 0; c < n; c++)
    printf("%d\n", array[c]);

  return 0;
}