int n=10;
void incrementar(int n) {
 n+= 1;
 printf("Dentro de incrementar: x = %d\n", x);
}
int main(void) {
 incrementar(n);
 printf("Despues de llamar: n = %d\n", n);
 return 0;
}
