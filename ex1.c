#include <stdio.h>

/* This is a comment */
int main(int argc, char *argv[])
{
  int distance = 100;

  // this is also a comment
  printf("You are %d miles away.\n", distance);
  for (int x=0; x<5; ++x) {
    printf("💩  %d.\n", x);
  }

  return 0;
}