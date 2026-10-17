#include <stdio.h>
int factorial(int x)
{
  if (x==0)
    return 1;
  int fac=1;
  fac=x*factorial(x-1);
  return fac;
}
int main()
{
  int x;
  printf("Enter a number:");
  scanf("%d",&x);
  printf("The factorial of %d is %d",x,factorial(x));
  return 0;
}
