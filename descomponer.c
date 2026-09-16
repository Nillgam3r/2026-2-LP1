#include<stdio.h>

int main(){
    int n;
    do{
        printf("Ingrese un numero de cuatro digitos\n");
        scanf("%d",&n);
    } while (n>9999 || n<1000);
int m=(n / 1000);
int c=(n / 100) % 10;
int d=(n / 10) % 10;
int u=n % 10;
printf("Miles: %d\n",m);
printf("Centenas: %d\n",c);
printf("Decenas: %d\n",d);
printf("Unidades: %d\n",u);

return 0;
}
