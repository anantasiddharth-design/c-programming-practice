#include <stdio.h>
int gcd(int x,int n)
{
  int g;
  g=x;
  int GCD=1;
  if (x>n)
    g=n;
  for (int i=1;i<g+1;i++)
  {
     if (x%i==0 && n%i==0)
     {
        if (i>GCD)
        {
          GCD=i;
        }
     }
  }
  return GCD;
}
int main()
{
  int n,i;
  printf("Enter number of elements in array:");
  scanf("%d",&n);
  int arr[n];
  for (i=0;i<n;i++)
  {
    int k;
    printf("Enter element:");
    scanf("%d",&k);
    arr[i]=k;
  }
  int Gcd=arr[0];
  for (int i=1;i<n;i++)
  {
    int k=1;
    k=gcd(Gcd,arr[i]);
    if (k>Gcd)
      Gcd=k;
  } 
  printf("The GCD of all the elements in the array is %d",Gcd);
  return 0;
}










