#include <stdio.h>

int ackermann(int m, int n) {
    static int contador = 0;
    contador++;
    int resultado;
    if (m == 0) {
        resultado = n + 1;
    } else if (m > 0 && n == 0) {
        resultado = ackermann(m - 1, 1);
    } else {
        resultado = ackermann(m - 1, ackermann(m, n - 1));
    }
    return resultado;
}

int main() {
    int r = ackermann(3, 4);
    printf("Resultado: %d\n", r);
    return 0;
}
