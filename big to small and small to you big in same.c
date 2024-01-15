#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
int bts()
{
    int n;
    printf("How many number you want to rearrange?\n");
    scanf("%d",&n);
    int a[n];
    int t;
    printf("Enter numbers\n");
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i = 0;i<n;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            if(a[j]>a[i])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    printf("\nnumbers from big to small are : ");
for(int i = 0;i<n;i++)
{
    printf("%d ",a[i]);
}
return 0;
}
int stb()
{
    int n;
    printf("How many number you want to rearrange?\n");
    scanf("%d",&n);
    int a[n];
    int t;
    printf("Enter numbers\n");
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i = 0;i<n;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    printf("\nnumbers from small to big are : ");
for(int i = 0;i<n;i++)
{
    printf("%d ",a[i]);
}
return 0;
}
int main (){
int a;
printf("\t\t\t\t\tits %s\n",__TIMESTAMP__);
printf("this file location is in %s\n\n",__FILE__);
printf("Lets play :\n\n");
printf("Enter 1 for rearrange your numbers from big to small\n\n");
printf("Enter 2 for rearrange your numbers from small to big\n\n");
scanf("%d",&a);
switch(a)
{
case 1:
    bts();
    break;
case 2:
    stb();
    break;
default :
    printf("You Entered wrong number.");
}
return 0;
}

