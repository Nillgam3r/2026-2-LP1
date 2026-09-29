#include<stdio.h>
#define ANIO_ACTUAL 2026
////////////////////Zona de prototipos
int devolver_anio_actual();
void saludar()

//funcion principal (main), aqui comienza todo
int main(){
    //LLamada o uso funcion
    saludar(); //Toda funcion que se use, debe estar declarada y/o defininda
    return 0;
}

////////////////////Zona de definiciones de funciones
//Definicion de la funcion llamada devolver_anio_actual
//Parametros : NINGUNO
//SALIDA     : 1
//             Numerico tipon entero
int devolver_anio_actual(){
    return ANIO_ACTUAL;
}
//Definicion de la funcion llamada saludar()
//Parametros: NINGUNO
//Salida : NINGUNA (void)
void saludar(){
    printf("¡Bienvenidos a SW303 en este anio %s!\n",devolver_anio_actual());
}
