#include <stdio.h>

int main(){
    double resultado = 0.693147;
    unsigned i = 0;
    double actual;
    double sum = 0.0;
    
    for(;;){
        double termino = 1.0 / (i + 1);
        if(termino < 1e-6) break;
        
        actual = (i % 2 == 0) ? termino : -termino;
        sum += actual;
        i++;
    }
    
    printf("Tolerancia: 1e-6\n");
    printf("Iteraciones: %u\n", i);
    printf("Suma calculada: %lf\n", sum);
    printf("Ln(2) esperado: %.6lf\n", resultado);
    printf("Error absoluto: %.6lf\n", resultado - sum);
    
    return 0;
}
