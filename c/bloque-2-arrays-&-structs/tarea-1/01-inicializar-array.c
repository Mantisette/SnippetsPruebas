// 7. Write a program that initializes an array of 10 elements. Each element should
// be equal to its subscript. The program should then print each of the 10 elements.

#include <stdio.h>

int main()
{
  const int SIZE = 10;
  int array[SIZE];

  for (int i = 0; i < SIZE; ++i)
    array[i] = i;

  printf("Array: [");
  for (int i = 0; i < SIZE; ++i)
    printf("%d, ", array[i]);
  printf("]");

  return 0;
}
