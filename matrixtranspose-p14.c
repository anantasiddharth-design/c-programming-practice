#include <stdio.h>
int main()
{
  int m;int n;
  printf("Enter rows and columns:");
  scanf("%d %d",&m, &n);
  int arr[m][n];
  for (int i=0;i<m;i++)
  {
    for (int j=0;j<n;j++)
    {
      int k;
      printf("Enter element:");
      scanf("%d",&k);
      arr[i][j]=k;
    }
  }
   printf("The entered array is:\n");
   for (int i=0;i<m;i++)
  {
    for (int j=0;j<n;j++)
    {
     printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
  int tarr[n][m];
  for (int i=0;i<n;i++)
  {
    for (int j=0;j<m;j++)
    {
      tarr[i][j]=arr[j][i];
    }
  }
  printf("The transpose of the array:\n");
  for (int i=0;i<n;i++)
  {
    for (int j=0;j<m;j++)
    {
      printf("%d ",tarr[i][j]);
    }
    printf("\n");
  }
return 0;
}








