#include <stdio.h>
int main() {
 FILE *archivo;
 long tamano;
 archivo = fopen("imagen.bmp", "rb");
 if (archivo == NULL) {
 printf("Error al abrir el archivo.\n");
 return 1;
 }
 fseek(archivo, 0, SEEK_END);
 tamano = ftell(archivo);
 printf("Tamano del archivo: %ld bytes\n", tamano);
 rewind(archivo);
 printf("Posicion actual: %ld\n", ftell(archivo));
 fclose(archivo);
 return 0;
}
