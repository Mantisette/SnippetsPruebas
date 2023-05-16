// EXTRA 2. Pide un número por teclado y comprueba si es múltiplo de 5.

#include <stdio.h>

int main(int argc, char const *argv[])
{
  int numero;

  printf("Introduzca un número >");
  scanf("%d", &numero);

  if (numero % 5 == 0)
  {
    printf("SÍ es múltiplo de 5.\n");
  }
  else
  {
    printf("NO es múltiplo de 5.\n");
  }

  return 0;
}
