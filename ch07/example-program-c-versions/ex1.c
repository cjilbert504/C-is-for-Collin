// Example program #1 from Chapter 7 of Absolute Beginner's Guide to
// C, 3rd Edition
// File Chapter7/ex1.c

/* This is a sample program that lists three kids and their school
   supply needs, as well as cost to buy the supplies */

#include <stdio.h>
#include <string.h>
#include "Chapter7ex1.h"

int main()
{
  int age;
  char childname[14] = "Thomas";

  printf("\n%s have %d kids.\n", FAMILY, KIDS);

  age = 11;
  printf("The oldest, %s, is %d.\n", childname, age);

  strcpy(childname, "Christopher");
  age = 6;
  printf("The middle boy, %s, is %d.\n", childname, age);

  strcpy(childname, "Benjamin");
  age = 3;
  printf("The youngest, %s, is %d.\n", childname, age);

  return 0;
}
