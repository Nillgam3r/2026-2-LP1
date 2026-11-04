#include <stdio.h>
typedef struct {
 int codigo;
 char nombre[30];
 float promedio;
} Estudiante;
int main() {
 FILE *archivo;
 Estudiante e;
 int codigoBuscado = 1002;
 int encontrado = 0;
 archivo = fopen("estudiantes.dat", "rb+");
 if (archivo == NULL) {
 printf("Error al abrir el archivo.\n");
 return 1
   }
 while (fread(&e, sizeof(Estudiante), 1, archivo) == 1) {
 if (e.codigo == codigoBuscado) {
 printf("Estudiante encontrado: %s\n", e.nombre);
 e.promedio = 19.5f;
 // Regresar al inicio del registro leido
 fseek(archivo, -(long)sizeof(Estudiante), SEEK_CUR);
 // Sobrescribir el registro
 if (fwrite(&e, sizeof(Estudiante), 1, archivo) != 1) {
 printf("Error al modificar el registro.\n");
 fclose(archivo);
 return 1;
 }
 encontrado = 1;
 break;
 }
 }
 if (!encontrado) {
 printf("Estudiante no encontrado.\n");
 } else {
 printf("Calificacion modificada correctamente.\n");
 }
 fclose(archivo);
 return 0;
}
