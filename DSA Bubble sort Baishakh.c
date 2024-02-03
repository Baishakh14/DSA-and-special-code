#include<stdio.h>
int main()
{
   int n;
   printf("how many number want to check and sort them?\n");
   scanf("%d",&n);
   int a[n];
   printf("Enter the numbers\n");
   for(int i = 0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(int i = 0; i<n-1 ;i++)
   {
       for(int j = 0; j<n-1 ;j++)
       {
           if(a[j]>a[j+1])
           {
               int t = a[j];
               a[j] = a[j+1];
               a[j+1] = t;
           }
       }
           printf("after %d iteration\n",i+1);
           for(int i = 0;i<n;i++)
           {
               printf("%d ",a[i]); ///checkhing how the iteration sorting is working
           }
           printf("\n");
   }
    printf("\n\n\nthe sorted array is :\n");
    for(int i = 0;i<n;i++)
    {
        printf("%d",a[i]);
        if(i<n-1) printf(" ");
    }
    printf("no extra space here");///for check;

    return 0;
}
