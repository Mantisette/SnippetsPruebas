// EXTRA 8. Muestra una lista de los factoriales de los X primeros números. X lo
// elige el usuario en cada ejecución y ha de ser un número entero estrictamente
// positivo. Nota: factorial de un número n es n!=n*(n-1)*(n-2)*...*1.
// Ejemplo: 6!=6*5*4*3*2*1=720

// TODO: esto tambien esta roto? a lo mejor el compilador de replit se ha hecho
// chapa, o a lo mejor la funcion scanf esta dando problemas. hay que revisar.

#include <stdio.h>

int main()
{
  int numero = 0;
  int resultado = 1;

  printf("Introduzca un número >");
  scanf("%d", &numero);

  while (numero >= 0)
  {
    resultado = resultado * numero;
    numero--;
  }

  printf("El factorial de %d es %d\n", numero, resultado);
  return 0;
}
