// descending-loops.c

/**
 *   The Descent
 * At the start of each game turn, you are given the height of the 8 mountains
 * from left to right. By the end of the game turn, you must fire on the highest
 * mountain by outputting its index (from 0 to 7).
 * The while loop represents the game.
 * Each iteration represents a turn of the game where you are given inputs
 * (the heights of the mountains) and where you have to print an output (the
 * index of the mountain to fire on)
 * The inputs you are given are automatically updated according to your last actions.
**/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
  // game loop (a turn)
  while (1) {
    int highest_mountain = 0;
    int index = 0;
    
    for (int i = 0; i < 8; i++) {
      // represents the height of one mountain.
      int height;
      scanf("%d", &height);
      
      if (height >= highest_mountain) {
        highest_mountain = height;
        index = i;
      }
    }

    printf("%d\n", index); // The index of the mountain to fire on.
  }

  return 0;
}
