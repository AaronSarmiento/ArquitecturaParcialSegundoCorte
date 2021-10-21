/*
Octubre 21 de 2021
Aaron Sarmiento - Sergio Heredia
Escribir un programa en C para encontrar el cubo de un número usando una función
*/

#include <stdio.h>

//declaracion de la función
double cubo(double numero);

int main()
{
    //declaración incial de las variables
    int numero;
    double c;
    
    /* Ingresar numero a encontrar */
    printf("Ingrese un numero: \n");
    scanf("%d", &numero);
    
    c = cubo(numero);

    printf("El cubo de  %d es %.2f \n", numero, c); 
    
    return 0;
}

/**
 * funcion del cubo
 Se realizan los calculos
 */
double cubo(double num)
{
    return (num * num * num);
}