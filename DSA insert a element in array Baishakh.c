/* insert a new element in array
*/
#include<stdio.h>
void printarray(int a[],int s)
{
    for(int i = 0;i<s;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
void insertion(int s,int in,int element,int tas,int a[])///size,index,element,total array size,array
{
    if(s>=tas)
    {
        printf("no space to add element\n");
        return;
    }
    for(int i = s-1;i>=in;i--)
    {
        a[i+1] = a[i];

    }
    a[in] = element;
}
int main()
{
    int a[100] = {4,7,23,89,56};
  // printarray(a,5);
  ///now add a new element 50 in array before 23
  /*
 # first found the index number before you want to add the array
  (index number of 23)

 # now remove all element from the index of 23 to one index front

 # and store the element in this index
 */
  int ti; ///target index;
  for(int i = 0;i<5;i++)
  {
      if(a[i]==23)
      {
          ti = i;
          break;
      }
  }
  ///printf("%d",ti); check the index number of 23;
   insertion(5,ti,50,100,a);
   printarray(a,6);
    return 0;
}
