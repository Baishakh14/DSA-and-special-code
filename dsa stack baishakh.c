#include<stdio.h>
#define s 4///declare the size of stack
int a[s]; ///declare the stack array last in fast out
int c = -1;
int push(int b) ///to push a value in stack;
{
    if(c<s-1)
    {
        c++;
        a[c] = b;
        printf("stored value %d in stack\n",b);
        return b;
    }
    else printf("no space to store value %d\n",b);
}
int peek() ///check the last value of stack;
{
   if(c>=0)
   {
       printf("last stack value or top value of stack is %d\n",a[c]);
   }

   else printf("no value to show\n");
}
int pop()  ///remove the last value of stack and return it;
{
    if(c>=0)
    {
        int v = a[c];
        printf("top of the value is %d and its now removed from the stack\n",v);
        c--;

    }
    else printf("no value to return and remove from stack\n");
}
int main()
{
   // printf("%d\n",push(10));
   peek(); ///is there any value in stack?
   push(10); ///adding numbers
   push(40);
   peek();
   pop();
   push(90);
   push(20);
   peek(); ///check what is the last value of stack;
   push(100);
   push(200);
   pop(); ///remove the last value of stack and return and then remove it;
   push(500);
   peek();
   printf("\n\n\n");
   for(int i = 0;i<s;i++)
   {
       printf("%d\n",a[i]);
   }
    return 0;
}
