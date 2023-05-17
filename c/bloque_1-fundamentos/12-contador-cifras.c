// EXTRA 7. Pide (y exige que sea así) un número entero estrictamente positivo.
// El programa mostrará cuántas cifras tiene (ej: 3120 → 4).

// TODO: no se qué le pasa pero esto está roto

#include <stdio.h>

int main()
{
  int numero, cifras = 0;

  printf("Introduzca un número positivo >");
  scanf("%d", &numero);

  printf("%d\n", numero);

  if (numero < 0)
  {
    printf("El número introducido no es positivo.\n");
    return 0;
  }

  while (numero >= 0)
  {
    cifras ++;
    numero = numero / 10;
  }

  printf("Cifras: %d", cifras);
  return 0;
}
