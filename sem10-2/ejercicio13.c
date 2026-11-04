#include <stdio.h>
typedef struct {
 int codigo;
 char nombre[30];
 float promedio;
} Estudiante;
int main() {
 FILE *archivo;
 Estudiante e;
 int indice = 2;
 archivo = fopen("estudiantes.dat", "rb");
 if (archivo == NULL) {
 printf("Error al abrir el archivo.\n");
 return 1;
 }
 fseek(archivo,
 (long)indice * sizeof(Estudiante),
 SEEK_SET);
 if (fread(&e, sizeof(Estudiante), 1, archivo) == 1) {
 printf("Codigo: %d\n", e.codigo);
 printf("Nombre: %s\n", e.nombre);
 printf("Promedio: %.2f\n", e.promedio);
 } else {
 printf("No se pudo leer el registro.\n");
 }
 fclose(archivo);
 return 0;}
