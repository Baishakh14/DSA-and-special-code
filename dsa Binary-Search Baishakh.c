#include<stdio.h>
int c(void const *a,const void *b)
{
    return *(int *)a - *(int *)b;
}
int main()
{
    int a[] = {3,55,56,45,23};
    int t = 45;///target number
    int l = sizeof(a)/sizeof(a[0]);///finding the size of array
    qsort(a,l,sizeof(int),c); ///sorting the array using qsort function
    printf("after sorting : \n");
    for(int i = 0;i<l;i++)
    {
        printf("%d ",a[i]);
    }
    int r = l-1;///right pointer
    int left = 0;///left pointer
    int m;///middle pointer
    while(left<=r)
    {
        m = (r+left)/2;
        if(a[m] == t)
        {
            printf("\nfind %d in %d index\n",t,m+1); ///if found print and close the programm
            break;
        }
        else if(t>a[m]) left = m+1;///if number is not found and number is less than target then change left value
        else r = m-1;  ///if bigg then change the right value
    }
    return 0;
}

