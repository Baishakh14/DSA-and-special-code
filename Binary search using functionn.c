/* your array should be sored for this searching*/
#include<stdio.h>
int binary_search(int a[],int size,int target_element)
{
    int r,l,m; ///right,left,mid;
    r = size-1;
    l = 0;
    while(l<=r)
    {
        m = (r+l)/2;
        if(a[m] == target_element) return m;
        if(a[m]>target_element)
        {
            r = m-1;
        }
        else
            l = m+1;
    }
    return -1;

}
int main()
{
    int arr[] = {23,45,56,77,89,91};
    int s = sizeof(arr)/sizeof(int);
    int t = 91;
    ///binary_search(arr,s,t);
    ///printf("%d",binary_search(arr,s,t));
    if(binary_search(arr,s,t)>=0)
    {
        printf("%d is found at %d index of array\n",t,binary_search(arr,s,t));
    }
    else printf("not found\n");
    return 0;
}
