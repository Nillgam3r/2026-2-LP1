#include <stdio.h>
int main(void) {
 int dia = 2;
 printf("Dia %d: ", dia);
 switch (dia) {
 case 1:
 printf("Lunes ");
 case 2:
 printf("Martes ");
 case 3:
 printf("Miercoles ");
 case 4:
 printf("Jueves ");
 case 5:
 printf("Viernes ");
 case 6:
 printf("Sabado ");
 case 7:
 printf("Domingo ");
 }
 printf("\n");
 // dia=2 imprime: "Martes Miercoles Jueves Viernes Sabado Domingo"
 // ¡Falta break en todos los casos!
 return 0;
}
