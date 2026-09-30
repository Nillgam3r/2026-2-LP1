#include <stdio.h>
int main(){
    int n;
    
    do {
        printf("Escriba un numero entero positivo: \n");
        scanf("%d", &n);
    } while(n<=0);


    int temp=n, suma=0;
    for(;;){
        printf("%d ", temp);
        while(temp>0){
            suma=suma + (temp%10);
            temp=temp/10;
        }

        if( !(suma<10) ){
            //Reinicio
            temp=suma;
            suma=0;
            printf(" -> ");

        }
        else {
            printf("-> %d \n", suma);
            printf("Raiz digital: %d", suma);
            break;
        }
    }

    return 0;
}
