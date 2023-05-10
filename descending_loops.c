// descending_loops.c

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
* The while loop represents the game.
* Each iteration represents a turn of the game
* where you are given inputs (the heights of the mountains)
* and where you have to print an output (the index of the mountain to fire on)
* The inputs you are given are automatically updated according to your last actions.
**/

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
