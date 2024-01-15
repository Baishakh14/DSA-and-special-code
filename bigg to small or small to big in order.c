#include<stdio.h>
int main()
{
    printf("\t\t\t\tthis program show you numbers from big to small in order\n\n\n");
    printf("\t\t\t\t\t\tthis file is saved in :- %s\n",__FILE__);
    printf("\t\t\t\t\t\t%s\n",__TIMESTAMP__);
    printf("\t\t\t\t\t\t%s\n",__DATE__);
    printf("\t\t\t\t\t\t%s\n\n\n",__TIME__);
    printf("Enter how many number you want to order in order from Big to Small\n");
    int n,t,i,j;
    scanf("%d",&n);
    int a[n];
    printf("Enter numbers\n");
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i = 0; i<n; i++)
    {
        for(j = i+1; j<n; j++)
        {
            if(a[i]<a[j]) //use > sign for print small to big in order.
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    for(int i = 0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
