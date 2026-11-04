#include <stdio.h>
int main() {
 FILE *archivo;
 unsigned char byte;
 int posicion = 0;
 archivo = fopen("estudiantes.dat", "rb");
 if (archivo == NULL) {
 printf("Error al abrir el archivo.\n");
 return 1;
 }
 printf("CONTENIDO HEXADECIMAL\n\n");
 while (fread(&byte, 1, 1, archivo) == 1) {
 printf("%02X ", byte);
 posicion++;
 if (posicion % 16 == 0) {
 printf("\n");
 }
 }
 printf("\n\nTotal de bytes leidos: %d\n", posicion);
 fclose(archivo)
 return 0;
}
