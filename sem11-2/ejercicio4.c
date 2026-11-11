#include <stdio.h>
//definir o crear un tipo de dato
//en este caso, crear el tipo Precio
typedef float Precio;

typedef char *Nombre_ptr;

typedef char Mensaje[50];

struct Alumno_{
    int codigo;
    char nombre[50];

};
typedef struct Alumno_ Alumno;

typedef struct obrero{
    int codigo;
    int antiguedad;
} Obrero;




int main(){
    
    Precio precio_venta, precio_compra;
    Nombre_ptr n1; //n1 es un puntero
    Mensaje m1;
    Alumno a1;
    Obrero o1;
    
    precio_venta = 25.50;
    
    printf("El precio de venta es %f\n",precio_venta);
    
    return 0;
}
