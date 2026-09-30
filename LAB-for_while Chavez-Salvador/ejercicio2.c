#include <stdio.h>
int main(){
    int mayor_semilla=0;
    int n;
    for(int i=1; i<=10000; i++){
        int cantidad=0, temp=i;

        while(temp!=1){
            if( (temp%2)==0 ){
                temp=temp/2;
            }
            else {
                temp= (3*temp) + 1;
            }
            cantidad++;
        }

        if(cantidad>mayor_semilla){
            mayor_semilla = cantidad;
            n=i;
        }
    }

    printf("Mayor semilla de [1, 10 000] es n:  %d, semilla: %d", n, mayor_semilla);

    return 0;
}
