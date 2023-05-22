/**
 * Necesitamos un programa que pueda formular las preguntas de un examen de
 * aritmética básica para los alumnos de tercer curso de primaria.
 * El programa deberá generar 10 preguntas. Cada una de ellas podrá ser la
 * suma, resta o multiplicación de dos números entre 0 y 10 (incluidos). Tanto
 * la operación como los números se elegirán al azar en cada pregunta.
 * Los alumnos de ese nivel todavía no conocen el concepto de número negativo.
 * Así que si la pregunta es una resta nos debemos asegurar de que el primer
 * operando sea mayor o igual que el segundo. Es decir: se le puede peguntar
 * cuánto es 4-1, pero no cuánto es 1-4. El alumno puede finalizar
 * ("abandonar") en cualquier momento el examen introduciendo una respuesta
 * negativa. Ya no se le harán más preguntas.
 * 
 * El programa debe autocorregir el examen:
 *   - Califica cada respuesta y proporciona la solución correcta si el
 *   alumno ha fallado.
 *   - Propociona la calificación final, Aprobado o Suspenso, y la nota numérica.
 * 
 * El comportamiento y aspecto de la ejecución del programa se muestran en las imágenes adjuntas.
 * Es obligatorio usar correctamente:
 *   - Alguna estructura condicional if / if-else / if-else-if. (1p)
 *   - Alguna estructura condicional switch. (1p)
 *   - Algún bucle. Si se usa más de uno, han de ser de diferente tipo. (2p)
 *   - El operador condicional ternario. (1p)
 * 
 * Los 5 puntos restantes dependen del correcto funcionamiento del programa.
 * 
 * IMPORTANTE:
 * Para conseguir puntuación plena en cada parte del programa, se valorará,
 * además del funcionamiento
 *   - Adecuada indentación del código.
 *   - No declarar más variables de las necesarias, y asignarles nombres significativos.
 *   - Adecuada cantidad de comentarios y que estos sean significativos.
 *   - No realizar más operaciones de las necesarias.
 *   - Nada de buscar código por internet y pegarlo a ver si funciona.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PREGUNTAS 10

int main()
{
  int operando_1, operando_2, swap, resultado, respuesta, aciertos = 0;
  char simbolo;

  srand(time(NULL));
  printf("Examen de Aritmética Básica - 3º Primaria\n");
  printf("-----------------------------------------\n");

  for (int i = 0; i < PREGUNTAS; ++i)
  {
    operando_1 = rand() % 11;
    operando_2 = rand() % 11;

    switch(rand() % 3)
    {
      case 0:
        resultado = operando_1 + operando_2;
        simbolo = '+';
        break;
      
      case 1:
        if (operando_2 > operando_1)
        {
          swap = operando_1;
          operando_1 = operando_2;
          operando_2 = swap;
        }
        resultado = operando_1 - operando_2;
        simbolo = '-';
        break;
      
      case 2:
        resultado = operando_1 * operando_2;
        simbolo = '*';
        break;
      
      default:
        printf("¿Esto no debería pasar?\n");
        return 0;
    }

    printf("%d %c %d = ", operando_1, simbolo, operando_2);
    scanf("%d", &respuesta);
    while (getchar() != '\n');

    if (respuesta < 0) break;
    
    printf("\t-> ");
    if (respuesta == resultado)
    {
      printf("BIEN\n");
      aciertos++;
    }
    else
    {
      printf("MAL (%d)\n", resultado);
    }
  }

  printf("Has %s (%d)\n", (aciertos >= 5) ? "APROBADO" : "SUSPENDIDO", aciertos);

  return 0;
}
