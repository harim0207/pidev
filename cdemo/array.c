#include <stdio.h>

void addArray();
void main()
{
          int arr[100];
          for (int i=0; i < 100; i++)
          {
                 arr[i] = i*i;
                 printf("%d\n", arr[i]);
          }
          printf(" \n");
          addArray(arr, 100, 3);
}
void addArray(int* arr, int  s, int n)
{     
          for (int num = 0; num < s; num++)
          {
                 arr[num] = arr[num] + n;
                 printf("%d\n", arr[num]);
          }
}


