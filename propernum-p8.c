#include <stdio.h>
int main()
{
  int x,i;
  int n=0;
  int sum=0;
  printf("Enter a number:");
  scanf("%d",&x);
  for (i=1;i<x;i++)
  {
    if (x%i==0)
      n+=1;
  }
  for (i=1;i<x;i++)
  {
    if (x%i==0)
      sum+=i;
  }
  if (sum==x)
    printf("%d is a proper number",x);
  else
    printf("%d is not a proper number",x);
  return 0;
}
