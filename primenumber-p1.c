#include <stdio.h>
int primenum(int x)
{ 
  int k=1;
  if (x<2)
  {
    return 0;
  }
  for (int i=2;i<=x/2;i++)
  {
    if (x%i==0)
    {
      k=0;
      break;
    }
  }
   return k;
}
int main()
{
  int x,k;
  printf("Enter a number:");
  scanf("%d",&x);
  k=primenum(x);
  if (k==1)
    printf("%d is a prime number",x);
  else
    printf("%d is not a prime number",x); 
}
  
