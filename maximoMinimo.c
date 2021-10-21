 /*
Octubre 21 de 2021
Aaron Sarmiento - Sergio Heredia 
Programa en C para encontrar el maximo y el minimos entre dos numeros 
*/

#include <stdio.h>

/* declaracion de funciones */
int max(int numero1, int numero2);
int min(int numero1, int numero2);



int main() 
{
    //decalracion inicial de las varibales
    int numero1, numero2, maximo, minimo;
    
    /* entrada del usuario*/
    printf("Ingrese dos numeros ");
    scanf("%d%d", &numero1, &numero2);
    
    maximo = max(numero1, numero2);  // llamado maximo
    minimo = min(numero1, numero2);  // llamado minimo
    
    printf("\nMaximo = %d\n", maximo);
    printf("Minimo = %d\n", minimo);
    
    return 0;
}


/**
 * Funcion para encontrar el maximo entre dos numeros
 */
int max(int numero1, int numero2)
{
    if (numero1 > numero2 ){
        return numero1;
    } 
    else{
        return numero2;
    }
}

/**
 * Funcion para encontrar el maximo entre dos numeros
 */
int min(int numero1, int numero2) 
{
      if (numero1 < numero2 ){
        return numero1;
    } 
    else{
        return numero2;
    }
}
