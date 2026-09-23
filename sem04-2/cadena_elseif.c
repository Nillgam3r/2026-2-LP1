#include <stdio.h>
int main(void) {
 int nota;
 printf("Nota: ");
 scanf("%d", &nota);
 // Equivalente al anidado anterior, pero plano y legible
 if (nota < 0 || nota > 100) {
 printf("Nota invalida\n");
 } else if (nota >= 90) {
 printf("Excelente\n");
 } else if (nota >= 70) {
 printf("Aprobado\n");
 } else if (nota >= 50) {
 printf("Recuperacion\n");
 } else {
 printf("Reprobado\n");
 }
 return 0;
}
