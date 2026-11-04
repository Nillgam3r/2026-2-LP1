#include <stdio.h>
int main() {
 FILE *origen;
 FILE *destino;
 unsigned char buffer[1024];
 size_t bytesLeidos;
 origen = fopen("imagen.bmp", "rb");
 if (origen == NULL) {
 printf("Error al abrir archivo origen.\n");
 return 1;
 }
 destino = fopen("copia.bmp", "wb");
 if (destino == NULL) printf("Error al crear archivo destino.\n");
 fclose(origen);
 return 1;
 }
 while ((bytesLeidos = fread(buffer, 1, sizeof(buffer), origen)) > 0) {
 if (fwrite(buffer, 1, bytesLeidos, destino) != bytesLeidos) {
 printf("Error al escribir archivo destino.\n");
 fclose(origen);
 fclose(destino);
 return 1;
 }
 }
 if (ferror(origen)) {
 printf("Error durante la lectura del archivo origen.\n");
 }
 fclose(origen);
 fclose(destino);
 printf("Copia finalizada.\n");
 return 0;
}
