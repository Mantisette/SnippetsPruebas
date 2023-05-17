// EXTRA 10. Escribe un programa que permita visualizar en pantalla
// los divisores de un número dado.

#include <stdio.h>

int main()
{
  int numero_original, numero_copia;
  
  printf("Introduzca un número >");
  scanf("%d", &numero_original);

  numero_copia = numero_original;

  printf("Los divisores de %d son: ", numero_original);

  while (numero_copia > 0)
  {
    if (numero_original % numero_copia == 0)
    {
      printf("%d, ", numero_copia);
    }
    numero_copia--;
  }
  
  return 0;
}
