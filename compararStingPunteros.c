 /*
Octubre 21 de 2021
Aaron Sarmiento - Sergio Heredia 
Programa en C para comparar Strings usando punteros
*/
#include<stdio.h>
int main()
{
    //Declaracion inicial de las variables
    char string1[50],string2[50],*str1,*str2;
    int i,equal = 0;

//Se le pide al usuario que ingrese los Strings
    printf("Ingrese el primer String: ");
    scanf("%s",string1);

    printf("Ingrese el segundo String: ");
    scanf("%s",string2);

    str1 = string1;
    str2 = string2;
//Se comparan los String en un ciclo while
    while(*str1 == *str2)
    {

        if ( *str1 == '\0' || *str2 == '\0' )
            break;

        str1++;
        str2++;

    }
//Si son iguales se imprime el siguiente mensaje, sino salta el else
    if( *str1 == '\0' && *str2 == '\0' )
        printf("\n\nSon iguales\n");

    else
        printf("\n\nNo son iguales\n");

}