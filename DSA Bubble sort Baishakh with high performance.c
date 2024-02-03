#include<stdio.h>
int main()
{
   int n;
   printf("how many number want to check and sort them?\n");
   scanf("%d",&n);
   int a[n];
   int c = 0;
   printf("Enter the numbers\n");
   for(int i = 0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(int i = 0; i<n-1 ;i++)
   {
       c++;
       int swap = 0;
       for(int j = 0; j<n-1 ;j++)
       {
           if(a[j]>a[j+1])
           {
               int t = a[j];
               a[j] = a[j+1];
               a[j+1] = t;
               swap = 1;
           }
       }
           printf("after %d iteration\n",i+1);
           for(int i = 0;i<n;i++)
           {
               printf("%d ",a[i]); ///checkhing how the iteration sorting is working
           }
           printf("\n");
           ///if no swap then it means number are sorted and close the sorting algorithm no need to work more
           if(swap==0) break; ///for fast performing the sorting.if the numbers sorted before than it will stop working and break the loop
   }
    printf("\nthe sorted array is :\n");
    for(int i = 0;i<n;i++)
    {
        printf("%d",a[i]);
        if(i<n-1) printf(" ");
    }
    printf("no extra space here\n");///for check;
    printf("total pass in number for sorting the numbers is %d\n\n",c);

    return 0;
}

