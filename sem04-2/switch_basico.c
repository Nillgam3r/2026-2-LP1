#include <stdio.h>
int main(void) {
 char operador;
 double a, b;
 printf("Operacion (a op b): ");
 scanf("%lf %c %lf", &a, &operador, &b);
 switch (operador) {
 case '+':
 printf("%.2f + %.2f = %.2f\n", a, b, a + b);
 break;
 case '-':
 printf("%.2f - %.2f = %.2f\n", a, b, a - b);
 break;
 case '*':
 printf("%.2f * %.2f = %.2f\n", a, b, a * b);
 break;
 case '/':
 if (b != 0.0) {
 printf("%.2f / %.2f = %.2f\n", a, b, a / b);
 } else {
 printf("Error: division por cero\n");
 }
 break;
 default:
 printf("Operador desconocido: '%c'\n", operador);
 break;
 }
 return 0;
}
