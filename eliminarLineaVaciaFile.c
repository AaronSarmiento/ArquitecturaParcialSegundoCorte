/*
Octubre 21 de 2021
Aaron Sarmiento - Sergio Heredia 
Programa en C para eliminar lineas vacias de un archivo
*/
#include <stdio.h>
#include <string.h>

#define MAX 256

  int main() 
  {
        int lno, ctr = 0;
        char ch;
        FILE *fptr1, *fptr2;
		char fname[MAX];
        char str[MAX], temp[] = "temp.txt";
		printf("\n\n Eliminar una línea específica de un archivo :\n");
		printf("-----------------------------------------\n"); 
		printf(" Ingrese el nombre del archivo que se abrirá : ");
		scanf("%s",fname);		
        fptr1 = fopen(fname, "r");
        if (!fptr1) 
		{
                printf(" Archivo no encontrado o no se puede abrir el archivo de entrada!!\n");
                return 0;
        }
        fptr2 = fopen(temp, "w"); // abre el archivo temporal en modo escritura
        if (!fptr2) 
		{
                printf("No se puede abrir un archivo temporal para escribir!!\n");
                fclose(fptr1);
                return 0;
        }
        printf(" Ingrese la línea que desea eliminar : ");
        scanf("%d", &lno);
		lno++;
        // copiar todo el contenido al archivo temporal excepto la línea específica
        while (!feof(fptr1)) 
        {
            strcpy(str, "\0");
            fgets(str, MAX, fptr1);
            if (!feof(fptr1)) 
            {
                ctr++;
                /* salte la línea en el número de línea dado */
                if (ctr != lno) 
                {
                    fprintf(fptr2, "%s", str);
                }
            }
        }
        fclose(fptr1);
        fclose(fptr2);
        remove(fname);  		// eliminar el archivo original
        rename(temp, fname); 	// cambiar el nombre del archivo temporal al nombre original
   fptr1=fopen(fname,"r"); 
            ch=fgetc(fptr1); 
          printf(" Ahora el contenido del archivo %s : \n",fname); 
          while(ch!=EOF) 
            { 
                printf("%c",ch); 
                 ch=fgetc(fptr1); 
            }
        fclose(fptr1);

        return 0;

  }