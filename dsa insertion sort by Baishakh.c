#include<stdio.h>
int main()
{
    int a[] = {-4,134,223,26,7};
    for(int i = 1;i<5;i++)
    {
        int h = i; ///make a hole in i th position
        int val = a[i]; ///storing first value in val variable
        while(h>0&&a[h-1]>val)
        {
            a[h] = a[h-1]; ///comparing val all previous number
            h--; ///if matched then swap it the previous one
        }
        a[h] = val;
    }
    printf("after sorting : ");
    for(int i = 0;i<5;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}

