#include <stdio.h>
int main()
{
  int x;
  int y=0;
  int z=0;
  printf("Enter number of elements in array:");
  scanf("%d",&x);
  int arr[x];
  for (int i=1;i<x+1;i++)
  {
    int k;
    printf("Enter element:");
    scanf("%d",&k);
    arr[i-1]=k;
  }
  y=arr[0];
  for (int i=0;i<x;i++)
  {
    if (arr[i]>y)
    {
      y=arr[i];
    }
  }
  for (int i=0;i<x;i++)
  {
    if (arr[i]<y)
    {
      z=arr[i];
      break;
    }
  }
  for (int i=0;i<x;i++)
  { 
    if (arr[i]>z && arr[i]!=y)
    {
      z=arr[i];
    }
  }
printf("%d is the second largest element",z);
return 0;
}
