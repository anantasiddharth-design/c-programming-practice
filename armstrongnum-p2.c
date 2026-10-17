#include<stdio.h>
int armstrong(int x)
{
  if (x==0)
    return 1;
  int k=0;
  int y=x;
  int z=x;
  int sum=0;
  int product=1;
  int n=0;
  while (z!=0)
  {
    n+=1;
    z=z/10;
  }
  while (y!=0)
  {
    for (int i=1;i<n+1;i++)
    {
      product*=y%10;
    }
    sum+=product;
    product=1;
    y=y/10;
  }
  if (sum==x)
    k=1;
  return k;
}
int main()
{
  int x;
  int k;
  printf("Enter a number:");
  scanf("%d",&x);
  k=armstrong(x);
  if (k==0)
    printf("%d is not an armstrong number",x);
  else
    printf("%d is an armstrong number",x);
  return 0;
}
      
    
