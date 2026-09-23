#include <stdio.h>
typedef enum {
 TRIANGULO_INVALIDO,
 TRIANGULO_NO_FORMADO,
 TRIANGULO_EQUILATERO,
 TRIANGULO_ISOSCELES,
 TRIANGULO_ESCALENO
} TipoTriangulo;
static TipoTriangulo clasificar_triangulo(int a, int b, int c) {
 if (a <= 0 || b <= 0 || c <= 0) {
 return TRIANGULO_INVALIDO;
 }
 if (a + b <= c || a + c <= b || b + c <= a) {
 return TRIANGULO_NO_FORMADO;
 }
 if (a == b && b == c) {
 return TRIANGULO_EQUILATERO;
 }
 if (a == b || a == c || b == c) {
 return TRIANGULO_ISOSCELES;
 }
 return TRIANGULO_ESCALENO;
}
static const char *nombre_tipo(TipoTriangulo t) {
 switch (t) {
 case TRIANGULO_INVALIDO: return "Lados invalidos";
 case TRIANGULO_NO_FORMADO: return "No forman triangulo";
 case TRIANGULO_EQUILATERO: return "Equilatero";
 case TRIANGULO_ISOSCELES: return "Isosceles";
 case TRIANGULO_ESCALENO: return "Escaleno";
 }
 return "Desconocido";
}
int main(void) {
 int a, b, c;
 printf("Ingrese tres lados (a b c): ");
 if (scanf("%d %d %d", &a, &b, &c) != 3) {
 fprintf(stderr, "Error: se esperaban tres enteros\n");
 return 1;
 }
 TipoTriangulo tipo = clasificar_triangulo(a, b, c);
 printf("Resultado: %s\n", nombre_tipo(tipo));
 return 0;
}