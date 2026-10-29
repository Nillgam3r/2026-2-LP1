#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *clonar(const char *origen)
{
    char *ptr = malloc(strlen(origen) + 1);
    if (ptr == NULL)
    {
        printf("No se pudo reservar memoria.\n");
        return NULL;
    }

    if (origen != NULL)
    {
        strcpy(ptr, origen);
        return ptr;
    }
}

int comparar(const char *a, const char *b)
{
    return strcmp(a, b);
}

int main()
{
  //cometi un error al querer definir un caracter de tipo puntero
    char *cad1[], *cad2[];
    printf("Ingrese la primera cadena: ");
    fgets(cad1, sizeof(cad1), stdin);
    cad1[strcspn(cad1, "\n")] = '\0';
    printf("Ingrese la segunda cadena: ");
    fgets(cad2, sizeof(cad2), stdin);
    cad2[strcspn(cad2, "\n")] = '\0';
    printf("Cadena 1: %s\nCadena 2: %s\n", cad1, cad2);

    printf("clonar(cadena1) = %s", *clonar(cad1));
    printf("clonar(cadena2) = %s", *clonar(cad2));
    printf("comparar(%s,%s) = %d ", cad1, cad2, comparar(cad1, cad2));
    return 0;
}
