#include <stdio.h>
typedef struct {
 int codigo;
 char nombre[30];
 float promedio;
} Estudiante;
int main() {
 FILE *archivo;
 Estudiante e;
 archivo = fopen("estudiantes.dat", "wb");
 if (archivo == NULL) {
 printf("Error al crear el archivo.\n");
 return 1;
 }
 e.codigo = 1001;
 snprintf(e.nombre, sizeof(e.nombre), "Juan Perez");
 e.promedio = 18.5f;
 fwrite(&e, sizeof(Estudiante), 1, archivo);
 e.codigo = 1002;
 snprintf(e.nombre, sizeof(e.nombre), "Maria Lopez");
 e.promedio = 17.0f;
 fwrite(&e, sizeof(Estudiante), 1, archivo);
 fclose(archivo);
 printf("Archivo binario creado correctamente.\n");
 return 0;
}
