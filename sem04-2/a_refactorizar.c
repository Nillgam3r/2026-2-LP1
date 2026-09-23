#include <stdio.h>
int main(){
int n;
scanf("%d",&n);
if(n>=0){
if(n==0){printf("cero\n");}
else{
if(n%2==0){printf("par positivo\n");}
else{printf("impar positivo\n");}
}
}else{
if(n==0){printf("cero\n");}
else{
if(n%2==0){printf("par negativo\n");}
else{printf("impar negativo\n");}
}
}
return 0;
}