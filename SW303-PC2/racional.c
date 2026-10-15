#include<stdio.h>
#include"racional.h"
/*
@brief función auxiliar estatica (solo visible en racional.c) para verificar si un numero es primo.
@param n Numero entero a evaluar.
@return 1 si es primo, 0 en caso contrario.
*/
static int es_primo(int n) {
  if (n <= 1) return 0;
  if (n <= 3) return 1;
  if (n % 2 == 0 || n % 3 == 0) return 0;
    for (int i = 5; i * i <= n; i += 6) {
      if (n % i == 0 || n % (i + 2) == 0) return 0;
    }
  return 1;
}
/*
@brief calcula el MCD de manera recursiva buscando factores comunes (optimizado con es_primo).
@param a primer numero.
@param b pegundo número.
@return el Maximo Comun Divisor.
*/
int mcd(int a, int b) {
// manejo de signos negativos para asegurar resultados positivos
  if (a < 0) a = -a;
  if (b < 0) b = -b;

// Casos base
  if (b == 0) return a;
  if (a == 0) return b;
  if (a == 1 || b == 1) return 1;

// buscamos un divisor comun 'i' empezando desde 2 hasta el menor de a y b
  int limite = (a < b) ? a : b;
  for (int i = 2; i <= limite; i++) {
// optimizamos evaluando solo si 'i' es primo o si es 2
    if (es_primo(i) || i == 2) {
      if (a % i == 0 && b % i == 0) {
// si encontramos un divisor comun, multiplicamos y llamamos recursivamente
      return i * mcd(a / i, b / i);
      }
    }
  }

// si no hay divisores comunes mayores a 1, son PESI
return 1;
}

/*
@brief simplifica una fraccion modificando los arreglos de 1 elemento.
@param num Arreglo con el numerador.
@param den Arreglo con el denominador.
*/
void simplificar(int num[], int den[]) {
// Normalizar signos si el denominador es negativo
if (den[0] < 0) {
num[0] = -num[0];
den[0] = -den[0];
}

int divisor = mcd(num[0], den[0]);
if (divisor > 0) {
num[0] /= divisor;
den[0] /= divisor;
}
}

//@brief suma dos fracciones y guarda el resultado simplificado en los arreglos de salida.

void sumar(int n1, int d1, int n2, int d2, int n_res[], int d_res[]) {
// Operación matemática de suma de fracciones
n_res[0] = (n1 * d2) + (n2 * d1);
d_res[0] = d1 * d2;

// Simplificamos el resultado final
simplificar(n_res, d_res);
}
