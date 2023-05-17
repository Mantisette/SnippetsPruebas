// EXTRA 6. Escribe un programa que muestre por pantalla diez líneas con los 15
// primeros múltiplos de los 10 primeros números (1...10). En cada línea deberá
// mostrar los múltiplos enteros de ese número de línea que no sean múltiplos
// de 5; los múltiplos de 5 se mostrarán como --. Si en alguna línea se alcanza
// o supera el valor 50, se dará por teminada la línea.

#include <stdio.h>

#define LINEAS 10
#define MULTIPLOS 15

int main() {
  int multiplo = 0;

  for (int i = 1; i < LINEAS; ++i)
  {
    for (int j = 1; j < MULTIPLOS; ++j)
    {
      multiplo = i * j;
      if (multiplo % 5 == 0)
      {
        printf(" -- ");
      }
      else
      {
        if (multiplo < 10) {
          printf(" 0%d ", multiplo);
        }
        else
        {
          printf(" %d ", multiplo);
        }
      }
    }
    // Fin de línea
    printf("\n");
  }
  return 0;
}
