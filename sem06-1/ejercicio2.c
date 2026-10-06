#include<stdio.h>
#define FILAS    5
#define COLUMNAS 4

int main(void){
    //definir un arreglo bidimensional
    double matriz[FILAS][COLUMNAS];
    
    //inicializar los elementos con cero
    for (size_t f = 0; f < FILAS; f++){
        for (size_t c = 0; c < COLUMNAS; c++){
            matriz[f][c] = 0.0;
        }
    }

    //Mostar la matriz
    for (size_t f = 0; f < FILAS; f++){
        for (size_t c = 0; c < COLUMNAS; c++){
            printf("%lf ", matriz[f][c]); //el elemento en memoria es f*FILAS + c*COLUMNAS
        }
        printf("\n"); //cambiar de linea
    }
    
}
