// Example program #1 from Chapter 10 of Absolute Beginner's Guide
// to C, 3rd Edition
// File Chapter10ex1.c

#include  <stdio.h>

int main()
{
  int ctr = 0;

  ctr = ctr + 1; // increases counter to 1
  printf("Counter is at %d.\n", ctr);

  ctr = ctr + 1; // increases counter to 2
  printf("Counter is at %d.\n", ctr);

  ctr = ctr + 1; // increases counter to 3
  printf("Counter is at %d.\n", ctr);

  ctr = ctr + 1; // increases counter to 4
  printf("Counter is at %d.\n", ctr);

  ctr = ctr + 1; // increases counter to 5
  printf("Counter is at %d.\n", ctr);

  ctr = ctr - 1; // decreases counter to 4
  printf("Counter is at %d.\n", ctr);

  ctr = ctr - 1; // decreases counter to 3
  printf("Counter is at %d.\n", ctr);

  ctr = ctr - 1; // decreases counter to 2
  printf("Counter is at %d.\n", ctr);

  ctr = ctr - 1; // decreases counter to 1
  printf("Counter is at %d.\n", ctr);

  return 0;
}
