#include <stdio.h>

int main() {
    int a = 23, b = 27, c = 128;
    
    printf("La suma de %d + %d es %d\n", a, b, a + b);
    printf("La resta de %d - %d es %d\n", a, b, a - b);
    printf("La multip de %d * %d es %d\n", a, b, a * b);
    printf("La div entera de %d / %d es %d\n", a, b, a / b);
    printf("La div real de %d / %d es %f\n", a, b, (float)a / b);
    printf("El residuo de %d %% %d es %d\n", a, b, a % b); 
    
    //condicionales
    printf("%d es >= a %d ? = %d\n",a,b,a>=b);
    printf("%d es <= a %d ? = %d\n",a,b,a<=b);
    printf("%d es < a %d ? = %d\n",a,b,a<b);
    printf("%d es > a %d ? = %d\n",a,b,a>b);
    if (a!=b){
        printf("Hola\n");
    }
    if (a==c){
        printf("Adios\n");
    }
    
    
    return 0;
}