#include<stdio.h>

int devolver_anio_actual(){
    return 2026;
}
//Definicion de la funcion llamada saludar()
void saludar(){
    printf("¡Bienvenidos a SW303 en este anio %s!\n",devolver_anio_actual());
}
//funcion principal (main), aqui comienza todo
int main(){
    printf("Iniciando programa.....\n");
    //LLamada o uso funcion
    saludar(); //Toda funcion que se use, debe estar declarada y/o defininda
    return 0;
}
