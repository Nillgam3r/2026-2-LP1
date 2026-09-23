#include <stdio.h>
int main(void) {
 int dia;
 printf("Dia (1-7): ");
 scanf("%d", &dia);
 printf("Tipo de dia: ");
 switch (dia) {
 case 1: case 2: case 3: case 4: case 5:
 printf("Laborable\n");
 break;
 case 6: case 7:
 printf("Fin de semana\n");
 break;
 default:
 printf("Dia invalido\n");
 break;
 }
 // Otro caso tipico: contar dias desde el inicio de un mes
 int mes = 3;
 int dias_acumulados = 0;
 switch (mes) {
 case 12: dias_acumulados += 30; // fall-through intencional
 case 11: dias_acumulados += 31;
 case 10: dias_acumulados += 30;
 case 9: dias_acumulados += 31;
 case 8: dias_acumulados += 31;
 case 7: dias_acumulados += 30;
 case 6: dias_acumulados += 31;
 case 5: dias_acumulados += 30;
 case 4: dias_acumulados += 31;
 case 3: dias_acumulados += 28; // febrero (anio no bisiesto)
 case 2: dias_acumulados += 31; // enero
 case 1: break;
 }
 printf("Dias antes del mes %d: %d\n", mes, dias_acumulados);
 return 0;
}
