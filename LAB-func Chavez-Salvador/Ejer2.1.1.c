#include <stdio.h>
int suma_digitos(int n);
int raiz_digital(int n);
void imprimir_traza(int n);

int main(){
    int n;
    
    do {
        printf("Escriba un numero entero positivo: \n");
        scanf("%d", &n);
    } while(n<=0);
    imprimir_traza(n);
    n=raiz_digital(n);
    printf("Raiz digital: %d", n);

    return 0;
}

int suma_digitos(int n){
    int suma=0;
    int temp=n;
    while(temp>0){
        suma=suma + (temp%10);
        temp=temp/10;
    }
    return suma;
}

int raiz_digital(int n){
    int temp=n;
    if(temp==0){
        return temp;
    }

    while(temp>=10){
        temp = suma_digitos(temp);
    }
    return temp;
}

void imprimir_traza(int n){
    printf("%d", n);
    while (n >= 10) {
        n = suma_digitos(n);
        printf(" -> %d", n);
    }
    printf("\n");
}
