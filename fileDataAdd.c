/*
Octubre 21 de 2021
Aaron Sarmiento - Sergio Heredia 
Programa en C para adjuntar datos en un archivo
*/

#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1000


void readFile(FILE * fPtr);


int main()
{
    /* Puntero de archivo para contener la referencia del archivo de entrada */
    FILE *fPtr;
    char filePath[100];

    char dataToAppend[BUFFER_SIZE];


    /* Ruta del archivo de entrada para eliminar las líneas vacías del usuario*/
    printf("Ingrese la ruta del archivo: ");
    scanf("%s", filePath);

    /*  Abrir todos los archivos en modo anexar. */
    fPtr = fopen(filePath, "a");


    /* fopen () devuelve NULL si no puede abrir el archivo en el modo dado. */
    if (fPtr == NULL)
    {
        /* No se puede abrir el archivo, por lo tanto, salir */
        printf("\nNo se puede abrir'%s' file.\n", filePath);
        printf("Verifique si el archivo existe y tiene errores de escritura.\n");
        exit(EXIT_FAILURE);
    }


    /* Datos de entrada para anexar del usuario */
    printf("\nIngrese datos para agregar: ");
    scanf("%c", dataToAppend);
    fflush(stdin);          // Para borrar caracteres de espacio en blanco adicionales en stdin
    fgets(dataToAppend, BUFFER_SIZE, stdin);


    /* Agregar datos al archivo */
    fputs(dataToAppend, fPtr);


    /* Vuelva a abrir el archivo en modo lectura para imprimir el contenido del archivo */
    fPtr = freopen(filePath, "r", fPtr);

    /* Imprimir el contenido del archivo después de agregar una cadena */
    printf("\nDatos agregados correctamente al archivo. \n");
    printf("Contenido de archivo modificado:\n\n");
    readFile(fPtr);


    /* Hecho con el archivo, por lo tanto, cierre el archivo. */
    fclose(fPtr);

    return 0;
}



/**
 * Reads a file character by character 
 * and prints on console.
 * 
 * @fPtr    Pointer to FILE to read.
 */
void readFile(FILE * fPtr)
{
    char ch;

    do 
    {
        ch = fgetc(fPtr);

        putchar(ch);

    } while (ch != EOF);
}