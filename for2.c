#include<stdio.h>

int main(){
    //primeros 25 numeros enteros
    int hasta = 25;
    int desde = 1; 
    for (;;) //Bucle,lazo,loop infinito
    {
        if (desde>hasta){
            break;
        }
        if (desde%3==0){
            printf("%d\n",desde);
        }
        desde++;
    }
    
    return 0;
}
