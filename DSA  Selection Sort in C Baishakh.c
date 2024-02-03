#include<stdio.h>
int main()
{
  int n;
  printf("How many want to take?\n");
  scanf("%d",&n);
  printf("Enter numbers\n");
  int a[n];
  int i,j;
  for(i = 0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i = 0;i<n-1;i++) ///dont to check the final pass.it will sort already
  {
      int m = i;
      for(int j = i+1;j<n;j++)
      {
          if(a[j]<a[m]) m = j;
      }
      int t = a[m]; ///swaping the numbers
      a[m] = a[i];
      a[i] = t;
      printf("\n");
          for(int i = 0;i<n;i++)
    {
        printf("%d ",a[i]); /// check how the swap is going in
    }
  }
  printf("\n\n");
  printf("sorted array is:");
    for(int i = 0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

