// EXTRA 11. Escribe un programa que te pida tu nota en números [0-10] y te
// muestre tu calificación con letras: D [0,5), C [5,7), B [7,9), A [9,10].
// Si se introduce un valor no válido, debe seguir preguntando.

#include <stdio.h>

int main()
{
  int nota = -1;

  while (nota < 0 || nota > 10)
  {
    printf("Introduzca su nota >");
    scanf("%d", &nota);
  }

  printf("Su calificación es: ");

  if (nota >= 0 && nota < 5)
    printf("D\n");
  else if (nota >= 5 && nota < 7)
    printf("C\n");
  if (nota >= 7 && nota < 9)
    printf("B\n");
  if (nota >= 9 && nota <= 10)
    printf("A\n");

  return 0;
}
