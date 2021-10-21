/*
Octubre 20 de 2021
Aaron Sarmiento - Sergio Heredia
Escribir un programa en C que permita multiplicar matrices
por el usuario
*/
#include <stdio.h>

int main(void)
{
 //declaracion inicial de las variables 
 int matrizA[2][2], matrizB[2][2], matrizC[2][2], i, j;

//entrada de datos para la matriz A
 printf("MatrizA\n");
for(i=1;i<=2; i++){
    for(j=1; j<=3; j++){
        printf("introducir valor de [%d] [%d] : ", i, j);
        scanf("%d", &matrizA[i][j]);
    }
}
//Entrada de datos para la matriz B
printf("MatrizB\n");
for(i=1;i<=3; i++){
    for(j=1; j<=3; j++){
        printf("introducir valor de [%d] [%d] : ", i, j);
        scanf("%d", &matrizB[i][j]);
    }
}
//Se realizan los calculos
for(i=1;i<=2; i++){
    for(j=1; j<=3; j++){
        matrizC[i][j]=(matrizA[1][j]* matrizB[1][j])+ (matrizA[i][2]*matrizB[2][j])+(matrizA[i][3]*matrizB[3][j]);
    }
}
//salida de datos
printf("RESULTADO\n");
for(i=1;i<=2; i++){
    for(j=1; j<=3; j++)
        printf("%d\t", matrizC[i][j]);
    printf("\n");
    
}
return 0;
}