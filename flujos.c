#include <stdio.h>
int main(void) {fprintf(stdout, "Mensaje normal por stdout\n");
 fprintf(stderr, "Mensaje de error por stderr\n");
 // Redirigir desde la terminal:
 // prog.exe > salida.txt 2> error.txt
 return 0;
}
