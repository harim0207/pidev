#include <stdio.h>

int main()
{
  float d = 3;
  float e = 7;
  printf("The value of d is %f and e is %f",d,e);
  printf("\nThe address of d is %d and e is %d", &d,&e);
  
  float* ptrtod;
  float* ptrtoe;
  ptrtod = &d;
  ptrtoe = &e;

  float temp= *ptrtod;
  *ptrtod =*ptrtoe;
  *ptrtoe = temp;
 
  printf("\nD: %f, E: %f", d,e);
  return 0; 
}
