// EXTRA 3. Pide un año por teclado y comprueba si es bisiesto o no. (Bisiesto:
// múltiplo de 4, excepto los que son múltiplos de 100 pero no de 400).

#include <stdio.h>

int main(int argc, char const *argv[])
{
  int anio;

  printf("Introduzca un año >");
  scanf("%d", &anio);

  if (anio % 4 == 0 && (anio % 100 == 0 && anio % 400 != 0))
  {
    printf("SÍ es un año bisiesto\n");
  }
  else
  {
    printf("NO es un año bisiesto\n");
  }

  return 0;
}
