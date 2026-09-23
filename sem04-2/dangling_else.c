#include <stdio.h>
int main(void) {
 int a = 1, b = 2;
 // Version ambigua (compila, pero ¿a que if pertenece el else?)
 if (a > 0)
 if (b > 0)
 printf("Ambos positivo\n");
 else
 printf("¿Cuando se imprime esto?\n");
 // El else se asocia al if MAS CERCANO -> if (b > 0)
 // Eso significa: si a>0 pero b<=0, cae en el else.
 // Version clara con llaves (recomendada siempre)
 if (a > 0) {
 if (b > 0) {
 printf("Ambos positivos (claro)\n");
 }
 } else {
 printf("a no es positivo\n");
 }
 return 0;
}