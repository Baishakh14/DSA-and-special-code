#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
po2(int n) ///find the power of by logic
{
    if(n<=0 || n%2!=0) return 0;
    while(n%2==0)
    {
        n/=2;
    }
    if(n==1) return n;
    return 0;
}
ispo2(int n)  ///find the power of 2 by bitwise logic
{
    if(n<=0) return 0;
    int a = (n&(n-1));
    if(a == 0) return 1;
    return 0;
}
ispowo2(int n) ///power of 2 by bitwise another logic;
{
    if(n<=0&&n%2!=0) return 0;
    int a = (n&-n);
    if(a==n) return 1;
    return 0;
}
int main()
{
    while(1)
    {
        //Sleep(2000);
        //system("COLOR 03");
        printf("ENTER a number to check is the number power of 2: \n");
        int n;
        scanf("%d",&n);
        if(po2(n))
        {
            system("COLOR 02");
            printf("yes, %d is power of 2 by logic\n",n);
        }
        else
        {
            system("COLOR 04");
            printf("%d is not power of 2 by logic\n",n);
        }
        ///printf("now check is %d power of 2 by bitse(n&(n-1)\n",n);
        if(ispo2(n))
        {
            system("COLOR 02");
            printf("yes, %d is power of 2 by bitwise(n&n-1)\n",n);
        }
        else
        {
            system("COLOR 04");
            printf("%d is not power of 2 by bitwise(n&n-1)\n",n);
        }
        ///printf("now check is %d power of 2 by bitse(n&(n-1)\n",n);
        if(ispowo2(n))
        {
            system("COLOR 02");
            printf("yes, %d is power of 2 by bitwise(n&-n)\n",n);
        }
        else
        {
            system("COLOR 04");
            printf("%d is not power of 2 by bitwise(n&-n)\n",n);
        }
    }
    return 0;
}
