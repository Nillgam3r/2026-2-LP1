#include<stdio.h>
//Las estructuras tienen un byte adicional por cada atributo
//Porque en memoria existira un fin de atributo
/*struct Dato{
    int entero;    //4 bytes + 1 byte de finalizacion
    float decimal; //4 bytes + 1 byte de finalizacion
    char caracter; //1 byte + 1 byte de finalizacion
};*/

//Aqui se comparte el espacio de memoria entre los tres atributos
//Toma la dimension de memoria del atributo que tiene mayor tamanio en la memoria
union Dato{
    int entero;    //4 bytes + 1 byte de finalizacion
    float decimal; //4 bytes + 1 byte de finalizacion
    char caracter; //1 byte + 1 byte de finalizacion
};

int main(){

    union Dato u1;
    printf("El tipo entero ocupa %d bytes\n",sizeof(int));
    printf("El tipo float ocupa %d bytes\n",sizeof(float));
    printf("El tipo char ocupa %d bytes\n",sizeof(char));
    printf("Un tipo de dato del tipo union Dato ocupa %d bytes\n",sizeof(union Dato));
    //Inicializacion
    u1.entero = 120;
    printf("Entero: %d\n",u1.entero);
    u1.decimal=3.1416;
    printf("Decimal: %f\n",u1.decimal);
    printf("Entero: %d\n",u1.entero);

    return 0;   
}
