int a = 3, b = 4;
int r = (a > 0 ? a : -a) + (b > 0 ? b : -b) * 2 - (a + b) / 2; // ¿Que hace?
// bien_estilo.c — Cada paso con nombre propio
int a = 3, b = 4;
int abs_a = (a > 0) ? a : -a;
int abs_b = (b > 0) ? b : -b;
int promedio = (a + b) / 2;
int r = abs_a + abs_b * 2 - promedio;