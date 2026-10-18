#include <stdio.h>
int main()
{
  int x,i;
  char g='y';
  printf("Enter number of elements in the array:");
  scanf("%d",&x);
  int arr[x];
  for (i=0;i<x;i++)
  {
    int k;
    printf("Enter the element:");
    scanf("%d",&k);
    arr[i]=k;
  }
  for (i=0;i<x-1;i++)
  {
    if (arr[i]>arr[i+1])
      g='n';
  }
    if (g=='y')
      printf("The array is in ascending order");
    else
      printf("The array is not in ascending order");
return 0;
}
      
