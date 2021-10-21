/*
Octubre 21 de 2021
Aaron Sarmiento - Sergio Heredia 
Programa en C para contar las apariciones de una palabra
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1000

/* Declaraciones de funciones */
int countOccurrences(FILE *fptr, const char *word);


int main()
{
    FILE *fptr;
    char path[100];

    char word[50];

    int wCount;

    /* Ruta del archivo de entrada */
    printf("Ingrese la ruta del archivo: ");
    scanf("%s", path);

    /* Ingrese la palabra para buscar en el archivo*/
    printf("Ingrese la palabra para buscar en el archivo: ");
    scanf("%s", word);

    /* Intenta abrir el archivo */
    fptr = fopen(path, "r");

    /* Salir si el archivo no se abrió correctamente*/
    if (fptr == NULL)
    {
        printf("No es posible abrir el archivo.\n");
        printf("Por favor, compruebe que tiene errores de lectura / escritura..\n");

        exit(EXIT_FAILURE);
    }

    // Función de llamada para contar todas las apariciones de palabras
    wCount = countOccurrences(fptr, word);

    printf("'%s' aparece %d veces en el archivo.\n", word, wCount);


    // Cerrar el archivo
    fclose(fptr);

    return 0;
}


/**
 * Devuelve el total de apariciones de una palabra en un archivo determinado.
 */
int countOccurrences(FILE *fptr, const char *word)
{
    char str[BUFFER_SIZE];
    char *pos;

    int index, count;
    
    count = 0;

    // Lea la línea desde el archivo hasta el final del archivo.
    while ((fgets(str, BUFFER_SIZE, fptr)) != NULL)
    {
        index = 0;

        // Encontrar la siguiente aparición de la palabra en str
        while ((pos = strstr(str + index, word)) != NULL)
        {
            // El índice de la palabra en str es
            // Dirección de memoria de pos - memoria
            // dirección de str.
            index = (pos - str) + 1;

            count++;
        }
    }

    return count;
}