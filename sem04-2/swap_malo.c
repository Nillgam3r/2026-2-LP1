int a = 1, b = 2;
a = b; // a pierde su valor original
b = a; // b recibe el NUEVO a, no el original
printf("a=%d, b=%d\n", a, b); // a=2, b=2 ← ¡ERROR!