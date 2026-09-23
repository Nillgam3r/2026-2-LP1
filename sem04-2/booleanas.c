#include <stdio.h>
int main(void) {
 int dia = 3; // 1=lunes ... 7=domingo
 // Rango: usar && pa
 // ERROR comun de quien viene de Python: escribir 1 <= dia <= 5 (NO funciona en C)
 // En C se evalua como (1 <= dia) <= 5 -> (0 o 1) <= 5 -> siempre 1
 int es_laborable_mal = 1 <= dia <= 5; // ¡SIEMPRE verdadero!
 int es_laborable_bien = (dia >= 1) && (dia <= 5);
 printf("dia=%d | mal=%d | bien=%d\n", dia, es_laborable_mal, es_laborable_bien);
 // De Morgan: !(A && B) == !A || !B
 int A = 1, B = 0;
 printf("!(A && B) = %d\n", !(A && B));
 printf("!A || !B = %d\n", !A || !B);
 // Cortocircuito en accion
 int divisor = 0;
 if (divisor != 0 && 10 / divisor > 1) { // no divide por cero
 printf("No se llega aqui\n");
 } else {
 printf("Cortocircuito protegio la division\n");
 }
 return 0;
}
