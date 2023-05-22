// EXTRA 8. Muestra una lista de los factoriales de los X primeros números. X lo
// elige el usuario en cada ejecución y ha de ser un número entero estrictamente
// positivo. Nota: factorial de un número n es n!=n*(n-1)*(n-2)*...*1.
// Ejemplo: 6!=6*5*4*3*2*1=720

#include <stdio.h>

int main()
{
  int numero = 1;
  int resultado = 1;

  printf("Introduzca un número >");
  scanf("%d", &numero);

  while (numero >= 1)
  {
    resultado = resultado * numero;
    numero--;
  }

  printf("El factorial es: %d\n", resultado);
  return 0;
}
