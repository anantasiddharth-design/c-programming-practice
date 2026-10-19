#include <stdio.h>
int main()
{
  int x;
  int p=1;
  int binary=0;
  printf("Enter a number:");
  scanf("%d",&x);
  int y=x;
  if (x==0)
    printf("The binary representation of 0 is 0");
  else
  {
  while (y>0)
  {
    binary=binary+(y%2)*p;
    p*=10;
    y/=2;
  }
  printf("The binary representation of %d is %d",x,binary);
  }
  return 0;
}
