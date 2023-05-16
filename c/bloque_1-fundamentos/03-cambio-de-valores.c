// 11. Write a program that prompts the user for two values, store them in
// variables and, after that, swap their values.

#include <stdio.h>

int main()
{
  int val1, val2, swap;

  printf("Input two values.\n");
  
  printf("Value 1 >");
  scanf("%d", &val1);
  printf("Value 2 >");
  scanf("%d", &val2);

  swap = val1;
  val1 = val2;
  val2 = swap;

  printf("Values switched.\nValue 1 = %d\nValue 2 = %d\n", val1, val2);

  return 0;
}
