// 10. Write a program that prompts the user for an integer number and outputs
// that value raised to the power of three.
// ¿What happens if the user inputs a non integer value?

#include <stdio.h>

int main()
{
  int number, power;

  printf("Input an integer number >");
  scanf("%d", &number);

  power = number * number * number;

  printf("The value of %d to the power of 3 is %d\n", number, power);
  return 0;
}
