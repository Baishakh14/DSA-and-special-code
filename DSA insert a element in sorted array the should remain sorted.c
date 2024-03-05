#include <stdio.h>
#define loop(i , n)  for(int i = 0; i < n; i++)


void pa(int a[], int s) {  // Function to print array
    loop( i,s) {
        printf("%d ",a[i]);
    }
    printf("\n");
}
int find_target_element_index(int a[],int s,int te) ///array,size,target element
{
    loop(i,s-1)
    {
        if(te>=a[i]&&te<=a[i+1])
        {
            return (i+1);
        }
    }
}
int insert_element_in_array(int a[],int s,int ti,int te,int ts)///array,size,target index,target element,total array size
{
    if(s>=ts)
    {
        printf("no space for add new element\n");
        return 0;
    }
    for(int i = s;i>=ti;i--)
    {
        a[i+1] = a[i];
    }
    a[ti] = te;
}
int main() {
    int a[100] = {10, 20, 30, 40, 50, 60, 70};
    printf("my work is insert a new element in this array without breaking the sorting\n");
    pa(a, 7);
    int te; ///target element;
    printf("enter element you want to insert in array and sort remain same\n");
    scanf("%d",&te);
   int ti = find_target_element_index(a,7,te);
   printf("new element add in %d index\n",ti);
   insert_element_in_array(a,7,ti,te,100);
   ///after insert the size is now 8;
   ///print and check is it work properly
   pa(a,8);
    return 0;
}
