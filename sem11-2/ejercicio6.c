#include <stdio.h>
#include<math.h>
/*
    El objetivo de puntero a funciones es lograr el "polimorfismo"
*/

double seno(double x){

    return sin(x);
}

double balistica(double x){
    return -x*x;
}

double cubica(double x){
    return x*x*x + 3*x*x -2*x + 5; 
}
/*
//Esta es la forma tradicional de graficar una funcion
//Si se desea graficar otra funcion hay que copiar y redifinir esta funcion
void graficar(double xmin, double xmax){
    for (double dx=xmin;dx<xmax;dx+=0.1){
    //Aqui se llama la funcion generadora
        seno(dx); //realmente seria plot(seno(dx))
    }
}*/

//Esta funcion esta lista para graficar cualquier funcion
void graficar(double xmin, double xmax,double (*funcion)(double)){
    for (double dx=xmin;dx<xmax;dx+=0.1){
        //Aqui se llama la funcion generadora del grafico
        funcion(dx); //realmente seria plot(seno(dx))
        printf(".");
    }
}

int main(){
    printf("Graficando el seno\n");
    graficar(-3.14,3.14,seno); //grafica el seno

    //Y como se hace para graficar la balistica?
    printf("\nGraficando el movimiento de una bala\n");
    graficar(0,25,balistica);

    //Graficar funcion cubica
    printf("\nGraficando la funcion cubica\n");
    graficar(0,5,cubica);   
    return 0;
}
