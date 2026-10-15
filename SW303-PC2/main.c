#include <stdio.h>
#include "racional.h"

int main() {
int n1, d1, n2, d2;
int n_res[1];
int d_res[1];
// Pedir primera fracción
printf("Ingrese la primera fraccion:\n");
printf("  Numerador: ");
scanf("%d", &n1);
printf("Denominador: ");
scanf("%d", &d1);

if (d1 == 0) {
    printf("Error: El denominador no puede ser cero.\n");
    return 1;
}
// Pedir segunda fracción
printf("\nIngrese la segunda fraccion:\n");
printf("Numerador: ");
scanf("%d", &n2);
printf("Denominador: ");
scanf("%d", &d2);

if (d2 == 0) {
    printf("Error: El denominador no puede ser cero.\n");
    return 1;
}

// Calcular la suma (que internamente simplifica el resultado)
sumar(n1, d1, n2, d2, n_res, d_res);

// Mostrar el resultado final
printf("\n\n");
printf("Resultado de la suma: %d/%d + %d/%d = %d/%d\n", 
       n1, d1, n2, d2, n_res[0], d_res[0]);

return 0;
}
