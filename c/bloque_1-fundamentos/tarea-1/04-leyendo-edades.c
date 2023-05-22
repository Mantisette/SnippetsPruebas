// 19. Write an if statement that determines whether someone is legally an adult
// (age 18), but not senior yet (age 65).

#include <stdio.h>

int main()
{
  int age;

  printf("Input your age >");
  scanf("%d", &age);

  if (age < 18)
  {
    printf("You're not an adult yet.\n");
  }
  else if (age > 65)
  {
    printf("You're a senior already.\n");
  }
  else
  {
    printf("You're legally an adult, but not a senior yet.\n");
  }

  return 0;
}
