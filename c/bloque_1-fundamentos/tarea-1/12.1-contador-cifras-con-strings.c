// Segunda forma de hacer el ejercicio, contando la longitud de la string
// introducida.
/////////////////////////////

#include <stdio.h>
#include <string.h>

int main()
{
  int numero, cifras = 0;
  char string[80];

  printf("Introduzca un número positivo >");
  scanf("%d", &numero);

  if (numero <= 0)
  {
    printf("El número introducido no es positivo.\n");
    return 0;
  }

  sprintf(string, "%d", numero);
  cifras = strlen(string);

  printf("Cifras: %d", cifras);
  return 0; 
}
