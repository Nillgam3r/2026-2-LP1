2.1.2

1. ¿Por qué n sigue siendo 10 en main?
Sigue siendo 10 ya que el parámetro que se manda es una copia del valor original y no la variable original, por lo cual la función incrementar(n) no afecta a la variable original.

2. ¿Cómo se resolvería sin usar punteros?
Haría que n sea una variable global e igualarlo dentro de la función incrementar.

3. Reescribir incrementar para que retorne el valor modificado
void incrementar(int &x) {
 x++;
 printf("Dentro de incrementar: x = %d\n", x);
}


2.1.3

1.Predecir la salida de cada uno.
Programa A
1
1
1
0
Programa B
3

2.Compilar y verificar. ¿Sorpresa?
Salió lo que esperaba

3. Refactorizar para eliminar la variable global: pasar el contador por parámetro y retornar el nuevo valor: int incrementar(int contador) { return contador +1; }

int incrementar(int &contador) {
return contador + 1;
}
int main(void) {
 int contador = 0;
 contador = incrementar(contador);
 contador = incrementar(contador);
 contador = incrementar(contador);
 printf("global contador = %d\n", contador);
 return 0;
}

4. Discusión: ¿Por qué las variables globales son una mala práctica en Ingeniería de Software? Mencionar al menos tres razones (acoplamiento, dificultad de testeo, condiciones de carrera en concurrencia).
- Dado que la variable es global es modificable para cualquier función entonces es propenso a errores de acuerdo al caso base de cada función dada, significa que si una función funciona específicamente con un valor inicial el cual fue modificado por otra anteriormente esta dará un error.

