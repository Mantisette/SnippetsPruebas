// 8. Write a program that inputs two floating-point values from the keyboard
// and displays their product.

#include <stdio.h>

int main()
{
  float val1, val2, product;

  printf("Input two numbers:\n");
  printf("Value 1 >");
  scanf("%f", &val1);
  printf("Value 2 >");
  scanf("%f", &val2);

  product = val1 * val2;
  printf("The product of %f and %f is %f\n", val1, val2, product);

  return 0;
}
