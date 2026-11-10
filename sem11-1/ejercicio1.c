#include <stdio.h>
#include <string.h>
//Definicion de un tipo de dato llamado Alumno
struct Alumno {
    int codigo;
    char nombre[20];
    int edad;
};

int main() {
    struct Alumno a1;     // Declaración de la variable a1 al tipo Alumno
    struct Alumno a2[5];  // Array de 5 alumnos
    struct Alumno a3 ={1250,"Abel",10};
    struct Alumno a4 ={.edad=22, .codigo=999}; //no se ha inicializado el atributo nombre


    // Llenado de datos
    a1.codigo = 123;
    strcpy(a1.nombre, "Jhonny"); // asignacion a cadenas
    a1.edad = 25;
    //Mostrar los datos      
    printf("Codigo      :%d\n", a1.codigo);
    printf("Nombre      :%s\n", a1.nombre);
    printf("Edad        :%d\n", a1.edad);
    //Mostrar los datos inicializados
    printf("Codigo      :%d\n", a3.codigo);
    printf("Nombre      :%s\n", a3.nombre);
    printf("Edad        :%d\n", a3.edad);
    //Mostrar datos inicializados
    printf("Codigo      :%d\n", a4.codigo);
    printf("Nombre      :%s\n", a4.nombre);
    printf("Edad        :%d\n", a4.edad);

    for(int i = 0; i < 5; i++) {
        a2[i].codigo = 100 + i;
        a2[i].edad = 12 + i;
    }

    for(int i = 0; i < 5; i++) {
        printf("Alumno      :%d\n", i);
        printf("Codigo      :%d\n", a2[i].codigo);
        printf("Edad        :%d\n", a2[i].edad);
    }

    return 0;
}
