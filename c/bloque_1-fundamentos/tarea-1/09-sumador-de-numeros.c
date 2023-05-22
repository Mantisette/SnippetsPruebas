// EXTRA 4. Escribe un programa que te permita sumar tantos números como quieras. La
// cantidad de números a sumar la decide el usuario en cada ejecución.

#include <stdio.h>

int main(int argc, char const *argv[])
{
  int cantidad, sumando, suma = 0;

  printf("Elija la cantidad de números a sumar >");
  scanf("%d", &cantidad);

  for (int i = 0; i < cantidad; i++)
  {
    printf("Introduzca un sumando >");
    scanf("%d", &sumando);
    suma += sumando;
  }

  printf("La suma total es: %d\n", suma);
  return 0;
}
