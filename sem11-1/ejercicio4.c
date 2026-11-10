#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Definicion de un tipo de dato llamado Alumno
struct Alumno {
    int codigo;
    char nombre[20];
    int edad;
};

void mostrar(struct Alumno a){
    printf("Codigo      :%d\n", a.codigo);
    printf("Nombre      :%s\n", a.nombre);
    printf("Edad        :%d\n", a.edad);
}

int main(){
  struct Alumno *ptr; //El puntero apunta a cualquier lugar de la memoria
  ptr = NULL;//Poner a nulo el puntero
  
  //.....mucho despues reservar memoria
  ptr = (struct Alumno*)malloc(sizeof(struct Alumno));
  
  //Para usarlo verificar si hay memoria
  if(ptr == NULL){
    printf("No hay memoria");
    return 1; // Corregido: main debe retornar un entero
  }
  //Si hay memoria, entonces llenar la estructura
  ptr->codigo = 9999;
  strcpy(ptr->nombre,"Abel");
  ptr->edad =22;

  mostrar(*ptr);
  free(ptr); // Corregido: se agregó el punto y coma faltante
  
  return 0;
}
