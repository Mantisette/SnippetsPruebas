/**
 * Escribe un programa que muestre cuatro opciones por pantalla. Sólo debe
 * aceptar una de esas cuatro opciones; si el usuario introduce otra cosa,
 * seguirá preguntando por una de las cuatro opciones. Una vez ejecutada la
 * opción correspondiente, debe seguir ofreciendo las opciones al usuario hasta
 * que éste decida salir del programa.
 *   - La primera debe preguntar por un número y comprobar si es un impar o
 *   está entre 10 y 100.
 *   - La segunda debe pedir un carácter y comprobar si es una letra mayúscula.
 *   - La tercera debe simular el lanzamiento aleatorio de una moneda. Para ello,
 *   utiliza las funciones srand() y rand() de la biblioteca stdlib. El resultado
 *   debe mostrarse como "Cara" o "Cruz".
 *   - La cuarta opción debe salir del programa
 * 
 * Se debe usar:
 *   - Alguna estructura condicional if / if-else / if-else-if-else ...
 *   - Alguna estructura condicional switch
 *   - Algún bucle. Si se usa más de uno, han de ser de diferente tipo.
 *   - El operador condicional ternario
 *   - La funcion rand() de la biblioteca stdlib, que proporciona un valor
 *   entero aleatorio, y la función srand(), que permite que los números
 *   aleatorios sean diferentes en cada ejecución del programa (si no, rand()
 *   proporciona siempre los mismos números).
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int opcion, numero;
  char caracter;

  srand(time(NULL));

  while (1)
  {
    printf("\nMENÚ PRINCIPAL\n");
    printf("1. Comprobación de números.\n");
    printf("2. Comprobación de letras.\n");
    printf("3. Cara o Cruz.\n");
    printf("4. Salir.\n");
    
    printf("Elige una opción >");
    scanf("%d", &opcion);
    while (getchar() != '\n');

    switch (opcion)
    {
      case 1:
        printf("Introduce un número >");
        scanf("%d", &numero);
        while (getchar() != '\n');

        if ((numero >= 10 && numero <= 100) || numero % 2 != 0)
        {
          printf("El número SÍ cumple las condiciones\n");
        }
        else
        {
          printf("El número NO cumple las condiciones\n");
        }
        break;

      case 2:
        printf("Introduzca un caracter >");
        scanf("%c\n", &caracter);
        while (getchar() != '\n');

        if (caracter >= 65 && caracter <= 90)
        {
          printf("SÍ es una letra MAYÚSCULA.\n");
        }
        else
        {
          printf("NO es una letra mayúscula.\n");
        }
        break;

      case 3:
        printf("Lanzando moneda...\n");
        printf("Ha salido: %s", (rand() % 2) ? "CARA\n" : "CRUZ\n");
        break;

      case 4:
        printf("Saliendo...\n");
        return 0;
      
      default:
        printf("La opción elegida no es correcta. Inténtelo de nuevo.\n");
        continue;
    }
  }
  return 0;
}
