#include <stdio.h> 
int main(){ 
    int n;
    printf("Ingrese n: ");
    scanf("%d",&n); 
    for(int i = 1; i < n+1; i++){
        for(int j = 1; j <= i; j++){
            printf("%d ", j); 
        }
    printf("\n"); 
    } 
    for(int i = n; i >=1; i--){
        for(int j = n; j>=n-i+1; j--){
            printf("%d ", n-j+1); 
        } 
        printf("\n"); 
    } 
    return 0; 
}
