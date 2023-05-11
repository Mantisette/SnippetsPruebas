// closest-to-zero.c

/**
 *   Temperatures
 * Write a program that prints the temperature closest to 0 among input data.
 * If two numbers are equally close to zero, positive integer has to be
 * considered closest to zero (for instance, if the temperatures are -5 and 5,
 * then display 5).
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_VALUE = 10000 // extracted from the question

int main()
{
  int N;
  scanf("%d", &N);

  if (N < 1)
  {
    printf("0\n"); // no temperature provided
    return 0;
  }

  int closest = MAX_VALUE;

  for (int i = 0; i < N; i++) {
    int t;
    scanf("%d", &t);
    
    t = abs(t);
    if (t < closest) {
      closest = t;
    }
  }

  printf("%d\n", closest);
  return 0;
}
