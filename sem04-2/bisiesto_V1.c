#include <stdio.h>
int main(void) {
 int anio;
 printf("Anio: ");
 scanf("%d", &anio);
 if (((anio % 4 == 0) && (anio % 100 != 0)) || (anio % 400 == 0)) {
 printf("%d es bisiesto\n", anio);
 } else {
 printf("%d NO es bisiesto\n", anio);
 }
 return 0;
}