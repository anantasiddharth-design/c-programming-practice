#include <stdio.h>
int ispalindrome(int x)
{
  if (x<10)
    return 1;
  int first=0;
  int last=x%10;
  int y=x;
  int g=x;
  int tens=1;
  int n=0;
  int j=0;
  while (g!=0)
  {
    n+=1;
    g=g/10;
  }
  while (y>10)
  {
    y=y/10;
  }
  first=y;
  for (int i=1;i<n;i++)
  {
    tens*=10;
  }
  if (first==last)
  {
    j=(x-(first*tens)-last)/10;
    return ispalindrome(j);
  }
  else
  {
    return 0;
  }
}
int main()
{
  int x;
  printf("Enter a number:");
  scanf("%d",&x);
  if (ispalindrome(x)==1)
    printf("%d is a palidrome",x);
  else
    printf("%d is not a palindrome",x);
  return 0;
}
    
    
