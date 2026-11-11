#include <stdio.h>

enum MES { //por efecto los enumerados comienzan con 0
    ENERO = 1, //personalizar el valor del 1er elemento del enumerado
    FEBRERO, 
    MARZO,
    ABRIL,
    MAYO,
    JUNIO,
    JULIO,
    AGOSTO,
    SEPTIEMBRE,
    OCTUBRE,
    NOVIEMBRE,
    DICIEMBRE
};

int main(){
    int mes = 6; //junio
    switch (mes) {
        case ENERO:      printf("Enero\n"); break;
        case FEBRERO:    printf("Febrero\n"); break;
        case MARZO:      printf("Marzo\n"); break;
        case ABRIL:      printf("Abril\n"); break;
        case MAYO:       printf("Mayo\n"); break;
        case JUNIO:      printf("Junio\n"); break;
        case JULIO:      printf("Julio\n"); break;
        case AGOSTO:     printf("Agosto\n"); break;
        case SEPTIEMBRE: printf("Septiembre\n"); break;
        case OCTUBRE:    printf("Octubre\n"); break;
        case NOVIEMBRE:  printf("Noviembre\n"); break;
        case DICIEMBRE:  printf("Diciembre\n"); break;
        default:         printf("Número invalido (debe ser del 1 al 12)\n"); break;
    }
    return 0;
}  
