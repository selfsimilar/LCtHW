#include <stdio.h>

int main()
{
  int age = 10;
  int height = 72;

  printf("I am %d years old.\n", age);
  printf("I am %d inches tall.\n", height);

  // EC
  printf("Bell - \a\n");
  printf("Backspace\b\b\b\b\b\b\bAND BEYOND");
  printf("\n");
  /* printf("Ignore remaining characters in this string\cblahblahblah\n"); */
  printf("\n");
  printf("Write a <form-feed> character\f\n");
  printf("Write a <new-line> character\n\n");
  printf("Write a <carriage return> character\r\n");
  printf("Write a <tab> character\t<---<tab>\n");
  printf("Write a <vertical tab> character\v\n");
  printf("Write a <single quote> character\'\n");
  printf("Write a backslash character \\\n");
  printf("Write an 8-bit character whose ASCII value is is the 1-, 2-, or 3-digit octal number NUM \123\n");

  /* float inf = 3.141592653589; */
  /* printf("%#-+ 0f\n", inf); */

  return 0;
}
