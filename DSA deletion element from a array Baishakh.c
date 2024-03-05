#include<stdio.h>
#define size 100
void pa(int a[],int s) ///print array (array,size)
{
    for(int i = 0;i<s;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}


int target_index(int a[],int s,int te)
{
    for(int i = 0;i<s;i++)
    {
        if(a[i]==te) return i;
    }
}

void deletion(int a[],int s,int ti)
{
    for(int i = ti;i<s-1;i++)
    {
        a[i] = a[i+1];
    }
}
int main()
{
    int arr[size] = {10,20,30,40,50,60,70,80,90};
    int s = 0; ///size;
    for(int i = 0;i<100;i++)
    {
      if(arr[i]) s++;
    }
    printf("now total element in array is %d\n",s);
    for(int i = 0;i<s;i++)
    {
        if(i==0) printf("your array is : ");
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Which element you want to delete from your array??\n");
    int te;///target element for delete the array
    scanf("%d",&te);
    int ti; ///target element index;
    ti = target_index(arr,s,te);
    deletion(arr,s,ti);
    s--;
    pa(arr,s);
    //printf("%d\n",ti);
    return 0;
}
