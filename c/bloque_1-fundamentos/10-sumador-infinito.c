// EXTRA 5. Pide número enteros positivos constantemente y muestra el resultado
// de su suma. Si te dan un negativo, lo ignoras. Para terminar el programa,
// introduce 0. Utiliza un bucle infinito, continue y break.

#include <stdio.h>

int main()
{
  int numero = 1;
  int suma = 0;

  while (numero != 0)
  {
    printf("Introduce un número positivo (0 para salir) >");
    scanf("%d", &numero);
    if (numero < 0) continue;
    suma += numero;
    printf("La suma total hasta ahora es: %d\n", suma);
  }

  return 0;
}
