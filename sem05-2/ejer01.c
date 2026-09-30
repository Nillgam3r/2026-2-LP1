#include<stdio.h>

int contador(){
  static int clave=0;
  clave++;
  return clave;
}

int contador2(){
  int clave2=0;
  clave2++;
  return clave2;
}
int clave3=20; //Variable global
int contador3(){
  
}

int main(){
printf("Se registra el alumno %d\n",contador2()};
printf("Se registra el alumno %d\n",contador2()};
printf("Se registra el alumno %d\n",contador2()};
printf("Se registra el alumno %d\n",contador2()};
//printf("%d",clave); //clave es una variable local
printf("Contador 3 es: %d",contador3());
return 0;
}
