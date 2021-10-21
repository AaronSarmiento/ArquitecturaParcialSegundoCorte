/*
Octubre 21 de 2021
Aaron Sarmiento - Sergio Heredia 
Programa en C para encontrar el area y la circunferencia de un circulo usando funciones 
*/

#include<stdio.h>
//funcion para encontrar el area de un circulo
double area(double radio){
    double pi = 3.14159;
     return pi*radio*radio;
}
//funcion para encontrar la circunferencia de un circulo
double circunferencia(double radio){
    double pi = 3.14159;
    return 2*pi*radio;
}

int main(){
    //declaracion inicial de las variables
    double radio;

    //se pide introducir el valor del radio del circulo
    printf("**************************************************\n");
    printf("********************BIENVENIDO******************** \n");
    printf("Por favor ingrese el valor del radio del circulo \n");
    scanf("%lf", &radio);


  

    //salida de datos
    printf("El area del circulo es: %lf \n", area(radio));
    printf("La circunferencia del circulo es: %lf \n", circunferencia(radio)); 
    printf("**************************************************\n"); 

}

