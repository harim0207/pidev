#include <stdio.h>


float PI = 3.1415926535;

void areaOfCircle(float r)
{ 
float area = PI * r * r;
printf("The area is %f\n", area);
}

void areaOfCircle(float r);

float main()
{
for (float r = 3.5; r < 12.5; r++)
      {
      areaOfCircle(r);
      }
return 0;
}
