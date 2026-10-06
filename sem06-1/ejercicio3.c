#include<stdio.h>

int main(){

    int *ptr; //se define ptr como puntero
              //es una variable que opera con dirección de memoria
              //inicialmente apunta a algun lugar de la memoria (tiene un lugar de memoria)
int cantidad = 200;

/*Regla: Si se crea el puntero se requiere incializar antes de usar*/
ptr = NULL; //NULL es cero, significa que no se apunta a nada, que no tiene memoria

if (ptr==NULL){
    ptr = &cantidad;
    printf("Puntero inciazlizado, su dirección es %p y su valor es %d ",ptr,*ptr);
}else{
    printf("El puntero ya tiene memoria, no es necesario incializar\n");
}
return 0;
}
