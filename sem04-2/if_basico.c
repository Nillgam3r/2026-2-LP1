#include <stdio.h>
int main(void) {
 int edad;
 printf("Edad: ");
 scanf("%d", &edad);
 // if simple
 if (edad >= 18) {
 printf("Mayor de edad\n");
 }
 // if-else: dos ramas mutuamente excluyentes
 if (edad >= 18) {
 printf("Puede votar\n");
 } else {
 printf("No puede votar\n");
 }
 // ¡CUIDADO!: una sola instruccion no necesita llaves, pero...
 if (edad >= 18)
 printf("Linea 1\n");
 printf("Linea 2\n"); // ¡SIEMPRE se ejecuta! No pertenece al if
 return 0;
}
