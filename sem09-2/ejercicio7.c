#include <stdio.h>
#include <stdlib.h>
int main(void) {
 int n;
 printf("Cantidad de elementos: ");
 if (scanf("%d", &n) != 1 || n <= 0) {//para detectar el error en la lectura del valor para n eneteros
 printf("Cantidad invalida.\n");
 return 1;//se termina el programa
 }
 int *ptr = malloc((size_t)n * sizeof *ptr);
 if (ptr == NULL) {
 printf("No se pudo reservar memoria.\n");
 return 1;//se termina el programa
 }
 //Si hay espacio se usa el espacio, llenandolos con numeros (i+1)*10
 for (int i = 0; i < n; i++) {
 ptr[i] = (i + 1) * 10;
 }
 printf("Elementos del arreglo:\n");
 for (int i = 0; i < n; i++) {
 printf("%d ", *(ptr + i));
 }
 printf("\n");
 free(ptr);
 ptr = NULL;
 return 0;
}
