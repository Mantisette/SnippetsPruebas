// 15. Write a program that asks for two 1-dimensional integer arrays of a
// specific size (provided by the user), creates another array containing the
// sum of the arrays introduced by the user, and displays the final array on the
// screen. It also has to display the initial address for each of the arrays.

#include <stdio.h>

int main()
{
  int size_1, size_2;

  printf("Introduzca la capacidad del primer array >");
  scanf("%d", &size_1);
  
  int array_1[size_1];

  printf("A continuación, introduzca los elementos del array:");
  for (int i = 0; i < size_1; ++i)
  {
    printf("Elemento %d >", i);
    int numero;
    scanf("%d", &numero);
    array_1[i] = numero;
  }


  printf("Introduzca la capacidad del segundo array >");
  scanf("%d", &size_2);

  int array_2[size_2];

  printf("A continuación, introduzca los elementos del array:\n");
  for (int i = 0; i < size_2; ++i)
  {
    printf("Elemento %d >", i + 1);
    int numero;
    scanf("%d", &numero);
    array_2[i] = numero;
  }

  int size_suma = size_1 + size_2;
  int array_suma[size_suma];
  int idx = 0;
  
  for (int i = 0; i < size_1; i++)
  {
    array_suma[idx] = array_1[i];
    idx++;
  }
  for (int j = 0; j < size_2; j++)
  {
    array_suma[idx] = array_2[j];
    idx++;
  }

  printf("Array resultado: [");
  for (int k = 0; k < size_suma; ++k)
    printf("%d, ", array_suma[k]);
  printf("]\n");

  printf("Posicion inicial primer array: %p\n", &array_1[0]);
  printf("Posicion inicial segundo array: %p\n", &array_2[0]);

  return 0;
}
