#include <stdio.h>
typedef struct {
 int codigo;
 char nombre[30];
 float promedio;
} Estudiante;
int main() {
 FILE *archivo;
 Estudiante e;
 archivo = fopen("estudiantes.dat", "ab");
 if (archivo == NULL) {
 printf("Error al abrir el archivo.\n");
 return 1;
 }
 e.codigo = 1003;
 snprintf(e.nombre, sizeof(e.nombre), "Carlos Ruiz");
 e.promedio = 16.5f;
 if (fwrite(&e, sizeof(Estudiante), 1, archivo) != 1) {
 printf("Error al escribir el registro.\n");
 fclose(archivo);
 return 1;
 }
 fclose(archivo);
 printf("Estudiante agregado correctamente.\n");
 return 0;
}
