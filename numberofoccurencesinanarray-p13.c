#include <stdio.h>
int main()
{
  int x;
  printf("Enter number of elements in the array:");
  scanf("%d",&x);
  int arr[x];
  for (int i=0;i<x;i++)
  {
    int k;
    printf("Enter element:");
    scanf("%d",&k);
    arr[i]=k;
  }
  int c=0;
  int arr1[x];
  for (int i=0;i<x;i++)
      {
        int found=0;
        for (int j=0;j<c;j++)
        {
          if (arr[i]==arr1[j])
          {
            found=1;
            break;
          }
        }
        if (found==0)
        {
          arr1[c]=arr[i];
          c++;
        }
      }
  for (int i=0;i<c;i++)
    {
      int c1=0;
      for (int j=0;j<x;j++)
      {
        if (arr1[i]==arr[j])
        {
          c1+=1;
        }
        if (j==x-1)
          printf("The element %d has occurred %d times in the array",arr1[i],c1);
      }
    }
