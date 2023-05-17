// EXTRA 9. Escribe un programa que lea un número entero positivo menor que 100
// e indique si es par o impar.

#include <stdio.h>

int main()
{
  int numero;

  printf("Introduzca un número positivo menor que 100 >");
  scanf("%d", &numero);

  if (numero > 100)
  {
    printf("El número es mayor de 100.\n");
    return 0;
  }

  if (numero < 0)
  {
    printf("El número es negativo.\n");
    return 0;
  }

  printf((numero % 2 == 0) ? "El número es PAR." : "El número es IMPAR.");
  return 0;
}
