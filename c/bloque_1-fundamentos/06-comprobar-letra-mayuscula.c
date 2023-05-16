// EXTRA 1. Pide un carácter por teclado y comprueba si es una letra mayúscula o no.

#include <stdio.h>

int main()
{
  char letra;

  printf("Introduzca un caracter >");
  scanf("%c\n", &letra)

  if (letra >= 65 && letra <= 90)
  {
    printf("SÍ es una letra MAYÚSCULA.\n");
  }
  else
  {
    printf("NO es una letra mayúscula.\n");
  }

  return 0;
}
