/*
Octubre 21 de 2021
Aaron Sarmiento - Sergio Heredia 
Programa en C para organizar valores 
*/
#include <stdio.h>

//Funcion shell sort
void shellsort(int arr[], int num)

{

//Declaracion inicial de las variables
    int i, j, k, tmp;

    for (i = num / 2; i > 0; i = i / 2)

    {

        for (j = i; j < num; j++)

        {

            for(k = j - i; k >= 0; k = k - i)

            {

                if (arr[k+i] >= arr[k])

                    break;

                else

                {

                    tmp = arr[k];

                    arr[k] = arr[k+i];

                    arr[k+i] = tmp;

                }

            }

        }

    }

}

int main()

{

    int arr[30];

    int k,  num;

    printf("Ingrese el numero de elementos: ");

    scanf("%d", &num);

    printf("\nIngrese %d numeros: \n", num);

 

    for (k =  0 ; k < num; k++)

    {

        scanf("%d", &arr[k]);

    }

    shellsort(arr, num);

    printf("\n El arreglo ordenado: ");

    for (k = 0; k < num; k++)

        printf("%d \n", arr[k]);

    return 0;

}