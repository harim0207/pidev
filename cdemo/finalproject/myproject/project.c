#include <stdio.h>

//b is the user input value
int a, c,d,f;
int prime[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479, 487, 491, 499, 503, 509, 521, 523, 541, 547, 557, 563, 569, 571, 577, 587, 593, 599, 601, 607, 613, 617, 619, 631, 641, 643, 647, 653, 659, 661, 673, 677, 683, 691, 701, 709, 719, 727, 733, 739, 743, 751, 757, 761, 769, 773, 787, 797, 809, 811, 821, 823, 827, 829, 839, 853, 857, 859, 863, 877, 881, 883, 887, 907, 911, 919, 929, 937, 941, 947, 953, 967, 971, 977, 983, 991, 997};


int main(int argc, char* argv[])

{
 if (argc != 3)
  {
    printf("%s : expected 2 args, please enter two integers\n", argv[0]);
    return 1;
  }

int arg1;
int found = sscanf(argv[1], "%d", &arg1);
  if (found != 1)
  {
    printf("first arg is not an integer, enter two ints\n");
    return 1;
  }
  int  b = arg1;

  int arg2;
  found = sscanf(argv[2], "%d", &arg2);
  if (found != 1)
  {
    printf("second arg is not an integer, enter two ints\n");
    return 1;
  }
  int e = arg2;

int foundPrime = 0;
for (c = 0; c <168; c++)
{
    if (b == prime[c])
    {
       foundPrime = 1;   
    }    
}
int foundSquare = 0;
int a =b/2;
for (d=0; d<a+1; d++)
{   
    if (d*d==b)
    {
       foundSquare = 1;
    }
}

if (b==1)
{
   foundSquare = 1;
}

if (foundSquare ==0 && foundPrime ==0)
{
   printf("%d is a not prime nor a perfect square\n", b);
}

if (foundSquare ==1 && foundPrime ==1)
{
   printf("%d is prime and perfect square\n", b);
}

if (foundSquare ==0 && foundPrime ==1)
{
   printf("%d is prime and not a perfect square\n",b);
}

if (foundSquare ==1 && foundPrime ==0)
{
   printf("%d is a perfect square and not prime\n", b);
}


int foundPrime2 = 0;
for (c = 0; c <168; c++)
{
    if (e == prime[c])
    {
       foundPrime2 = 1;   
    }    
}
int foundSquare2 = 0;
int f =e/2;
for (d=0; d<f+1; d++)
{   
    if (d*d==e)
    {
       foundSquare2 = 1;
    }
}

if (e==1)
{
  foundSquare2 = 1;
}

if (foundSquare2 ==0 && foundPrime2 ==0)
{
   printf("%d is a not prime nor a perfect square\n", e);
}

if (foundSquare2 ==1 && foundPrime2 ==1)
{
   printf("%d is prime and perfect square\n", e);
}

if (foundSquare2 ==0 && foundPrime2 ==1)
{
   printf("%d is prime and not a perfect square\n",e);
}

if (foundSquare2 ==1 && foundPrime2 ==0)
{
   printf("%d is a perfect square and not prime\n", e);
}


int i,gcd=1;

    for(i=1; i <= b && i <= e; ++i)
    {
        if(b%i==0 && e%i==0)
            gcd = i;  
  }
printf("\nGCD of %d and %d is : %d\n\n", b, e, gcd); 


return 0;

}
