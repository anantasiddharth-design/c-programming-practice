#include <stdio.h>
int amicable(int x,int y)
{
  int a=0;int b=0;
  for (int i=1;i<x;i++)
  {
    if (x%i==0)
      a+=i;
  }
  for (int i=1;i<y;i++)
    {
      if (y%i==0)
        b+=i;
    }
  if (x==b && y==a)
    return 1;
  else 
    return 0;
}
int main()
{
  int x,y;
  printf("Enter a number:");
  scanf("%d",&x);
  printf("Enter another number:");
  scanf("%d",&y);
  int k=amicable(x,y);
  if (k==1)
    printf("%d and %d are amicable numbers",x,y);
  else
    printf("%d and %d are not amicable numbers",x,y);
  return 0;
}
