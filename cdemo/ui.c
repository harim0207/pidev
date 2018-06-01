#include <stdio.h>


float PI = 3.1415926535;

void areaOfCircle(float r)
{ 
float area = PI * r * r;
printf("The area is %f\n", area);
}

void areaOfCircle(float r);
int a,b;
float main()
{
printf("radius 1st value: \n");
scanf("%d",&a);
printf("\nradius 2nd value: \n");
scanf("%d", &b);

for (float r = a; r < b+1; r++)
      {
      areaOfCircle(r);
      }
return 0;
}
