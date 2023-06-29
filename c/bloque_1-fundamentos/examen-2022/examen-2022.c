/**
 * Tenemos que desarrollar un programa para la máquina de café de la sala de profesores.
 * La máquina acepta un importe máximo de 5€. Y no admite monedas menores a 5cent.
 * 
 * El programa le pedirá primero al usuario que introduzca el dinero. Ese
 * dinero ha de satisfacer los requisitos especificados anteriormente. Si no,
 * se le volverá a pedir hasta que los satisfaga.
 * 
 * Una vez introducida una cantidad correcta de dinero, se mostrará al usuario
 * el menú de productos y se le pedirá que elija uno. Se seguirá mostrando el
 * menú hasta que el usuario elija una opción correcta.
 * 
 * Una vez elegida la opción correcta, el programa informa al usuario de que
 * ya tiene su producto y, si lo hubiere, el cambio. El cambio siempre se dará
 * en monedas, minimizando la cantidad de las mismas.
 * 
 * El comportamiento y aspecto de la ejecución del programa se muestran en las imágenes adjuntas.
 * 
 * OBSERVACIÓN: como todavía no sabemos controlar bien la entrada del usuario,
 * vamos a suponer que siempre introduce datos del tipo adecuado. Es decir:
 * números (posiblemente, con decimales) para el dinero, y un número entero
 * para la opción de menú (no letras, por ejemplo).
 * 
 * CONSEJO: dado que no sabemos todavía redondear, y que C puede cometer
 * ciertos errores de redondeo en los cálculos si no somos muy cuidadosos con
 * los tipos de datos, recomiendo convertir el dinero introducido por el usuario
 * en "céntimos" y trabajar con números enteros en la medida de lo posible.
 * 
 * Es obligatorio usar de manera correcta y acorde a la funcionalidad del programa:
 *   - Alguna estructura condicional if / if-else / if-else-if (1p)
 *   - Alguna estructura condicional switch (1p)
 *   - Algún bucle. Si se usa más de uno, no se puede repetir un tipo hasta que se usen los demás (2p)
 *   - El operador condicional ternario (1p)
 *   - Aleatoriedad(1p)
 * Los 4 puntos restantes dependen del correcto funcionamiento del programa:
 * validación del importe de entrada, presentación/selección/validación de la
 * opción de menú, cálculo y presentación del cambio. 
 * 
 * IMPORTANTE: 
 * Para conseguir puntuación plena en cada parte del programa, se valorará, además del funcionamiento,
 *   - Adecuada indentación del código.
 *   - Declaración y uso adecuados de variables y CONSTANTES.
 *   - Adecuada cantidad de comentarios y que estos sean significativos.
 *   - No realizar más operaciones de las necesarias.
 *   - Nada de buscar código por internet y pegarlo a ver si funciona.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DINERO_MINIMO 5
#define DINERO_MAXIMO 500
#define PRODUCTOS 6

int main()
{
  srand(time(NULL));

  float dinero = 0;
  int centimos = 0;
  int seleccion_producto, precio_cafe;
  int mon2eur = 0;
  int mon1eur = 0;
  int mon50cent = 0;
  int mon20cent = 0;
  int mon10cent = 0;
  int mon5cent = 0;

  while (1)
  {
    printf("Introduzca saldo >");
    scanf("%f", &dinero);

    centimos = (int)(dinero * 100);
    if (centimos % 5 != 0 || centimos < DINERO_MINIMO || centimos > DINERO_MAXIMO)
    {
      printf("La cantidad introducida no es válida.\n");
      continue;
    }
    else break;
  }

  while (1)
  {
    printf("\n");
    printf("1) Café solo - 0.85€\n");
    printf("2) Café manchado - 0.95€\n");
    printf("3) Café con leche - 0.60€\n");
    printf("4) Leche con cacao - 1.00€\n");
    printf("5) Capuchino - 1.25€\n");
    printf("6) Sorpréndeme\n");
    
    printf("Elija producto >");
    scanf("%d", &seleccion_producto);

    if (seleccion_producto < 1 || seleccion_producto > PRODUCTOS)
    {
      printf("La opción introducida no es válida.\n");
      continue;
    }
    else break;
  }

  if (seleccion_producto == PRODUCTOS) seleccion_producto = rand() % 5 + 1;

  switch (seleccion_producto)
  {
    case 1:
      precio_cafe = 85;
      break;
    case 2:
      precio_cafe = 95;
      break;
    case 3:
      precio_cafe = 60;
      break;
    case 4:
      precio_cafe = 100;
      break;
    case 5:
      precio_cafe = 125;
      break;
    default:
      printf("Esto no debería pasar.\n");
      return 0;
  }

  if (centimos < precio_cafe)
  {
    printf("No tiene suficiente dinero para permitirse eso.\n");
    return 0;
  }

  centimos -= precio_cafe;
  printf("Recoja su producto(%d) ", seleccion_producto);
  if (centimos <= 0) return 0;
  
  while (centimos > 0)
  {
    if(centimos >= 200)
    {
      mon2eur = centimos / 200;
      centimos -= mon2eur * 200;
    }
    if(centimos >= 100)
    {
      mon1eur = centimos / 100;
      centimos -= mon1eur * 100;
    }
    if(centimos >= 50)
    {
      mon50cent = centimos / 50;
      centimos -= mon50cent * 50;
    }
    if(centimos >= 20)
    {
      mon20cent = centimos / 20;
      centimos -= mon20cent * 20;
    }
    if(centimos >= 10)
    {
      mon10cent = centimos / 10;
      centimos -= mon10cent * 10;
    }
    if(centimos >= 5)
    {
      mon5cent = centimos / 5;
      centimos -= mon5cent * 5;
    }
  }

  printf("y su cambio:");
  printf((mon2eur > 0) ? " %dx2€" : "", mon2eur);
  printf((mon1eur > 0) ? " %dx1€" : "", mon1eur);
  printf((mon50cent > 0) ? " %dx50c" : "", mon50cent);
  printf((mon20cent > 0) ? " %dx20c" : "", mon20cent);
  printf((mon10cent > 0) ? " %dx10c" : "", mon10cent);
  printf((mon5cent > 0) ? " %dx5c" : "", mon5cent);

  return 0;
}
