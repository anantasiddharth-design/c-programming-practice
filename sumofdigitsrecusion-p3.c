#include <stdio.h>
int digitsum(int x)
{
  if (x==0)
    return 0;
  int y=x;
  int sum;
  sum=y%10;
  y=y/10;
  sum+=digitsum(y);
  return sum;
}
int main()
{
  int x;
  printf("Enter a number:");
  scanf("%d",&x);
  printf("%d is the sum of the digits",digitsum(x));
  return 0;
}
  
