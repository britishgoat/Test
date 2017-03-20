#include<stdio.h>
#include<cs50.h>
//#include<string.h>
//#include<math.h>

int main(void)
{
    printf("Numero de filas de la matriz 1 \t \t");
    int x=GetInt();
    printf("Numero de columnas de la matriz 1 \t");
    int y=GetInt();
    printf("Numero de filas de la matriz 2 \t \t");
    int z=GetInt();
    printf("Numero de columnas de la matriz 2 \t");
    int w=GetInt();
    if(z!=y)
    {
        printf("Las matrices no se pueden multiplicar. \n");
        return 1;
    }
    printf("Ingrese los valores de la matriz 1, fila por fila(Primero los terminos de la fila 1, luego los de la 2 etc.) \n");
    int A[x][y];
    for(int i=0; i<x; i++)
    {
        printf("Fila %d : \n",(i+1));
        for(int j=0; j<y; j++)
        {
            A[i][j]=GetInt();
        }
    }
     printf("Ingrese los valores de la matriz 2, fila por fila(Primero los terminos de la fila 1, luego los de la 2 etc.) \n");
    int B[z][w];
    for(int i=0; i<z; i++)
    {
        printf("Fila %d : \n",(i+1));
        for(int j=0; j<w; j++)
        {
            B[i][j]=GetInt();
        }
    }
    printf("El resultado es: \n");
    int C[x][w];
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<w; j++)
        {
            C[i][j]=0;
            for(int k=0; k<z; k++)
                C[i][j]+=A[i][k]*B[k][j];
            printf("%d \t",C[i][j]);
        }
        printf("\n");
    }
}