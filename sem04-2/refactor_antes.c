#include <stdio.h>
int main(void) {
 int a, b, c;
 scanf("%d %d %d", &a, &b, &c);
 if (a > 0 && b > 0 && c > 0) {
 if (a + b > c && a + c > b && b + c > a) {
 if (a == b && b == c) {
 printf("Equilatero\n");
 } else {
 if (a == b || a == c || b == c) {
 printf("Isosceles\n");
 } else {
 printf("Escaleno\n");
 } }
} else {
printf("No forman triangulo\n");
}
} else {
printf("Lados invalidos\n");
}
return 0;
}
