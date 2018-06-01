#include <stdio.h>

int main()
{
  int a = 0;
  float b = 1.2;
  double c = 2.24;
  char d = 'c';

  printf("Size of variable a is %d bytes\n",sizeof(a));
  printf("Size of variable b is %d bytes\n",sizeof(b));
  printf("Size of variable c is %d bytes\n",sizeof(c));
  printf("Size of variable d is %d bytes\n",sizeof(d));
return 0;
}
