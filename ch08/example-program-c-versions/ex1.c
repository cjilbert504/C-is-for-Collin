// Example program #1 from Chapter 8 of Absolute Beginner's Guide to
// C, 3rd Edition
// File Chapter8ex1.c

/* This is a sample program that asks users for some basic data and
   prints it on screen in order to show what was entered */

#include <stdio.h>

int main()
{
  // Set up the variables that scanf will fill

  char firstInitial;
  char lastInitial;
  int age;
  int favorite_number;

  printf("What letter does your first name begin with?\n");
  scanf(" %c", &firstInitial);

  printf("What letter does your last name begin with?\n");
  scanf(" %c", &lastInitial);

  printf("How old are you?\n");
  scanf(" %d", &age);

  printf("What if your favorite number (integer only)?\n");
  scanf(" %d", &favorite_number);

  printf("\nYour initials are %c.%c. and you are %d years old",
      firstInitial, lastInitial, age);
  printf("\nYour favorite number is %d.\n\n", favorite_number);

  return 0;
}
