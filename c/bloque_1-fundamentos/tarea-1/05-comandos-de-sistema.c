// 30. Write a program that provides a menu with three different options. The
// third option should quit the program. Each of the other options should
// execute a system command using the system() function.

// For this test we're using a Linux-based OS, so: bash commands

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int option;

  printf("MENU: \n");
  printf("1: ls command\n");
  printf("2: top command\n");
  printf("3: Quit\n");

  scanf("%d", &option);

  switch (option)
  {
    case 1:
      system("ls");
      break;
    case 2:
      system("top");
      break;
    case 3:
      printf("Quitting...\n");
      return 0;
    default:
      printf("Well this is unexpected... Option not recognized. Lemme close real quick.\n");
      return 0;
  }
  return 0;
}
