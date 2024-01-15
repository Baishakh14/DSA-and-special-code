#include<stdio.h>
#include<string.h>
int main()
{
    int g = 0,b = 0;
    int n;
    scanf("%d",&n);
    char a[n][20];///two dimential array first is string number second is string total wrd can store
    char c;
    for(int i = 0;i<n;i++)
    {
       //scanf(" %c",&c);
       scanf(" %[^\n]",a[i]); /// taking the stirng
       if(c =='+') g++;
       if(c =='-') b++;
    }
    char t[100];
    for(int i = 0;i<n;i++)
    {
        for(int j= i+1;j<n;j++)
        {
            if(strcmp(a[i],a[j])>0)
            {
                strcpy(t,a[j]); ///compare them if first is bigger than second it mean second is first word than frst word
                strcpy(a[j],a[i]);
                strcpy(a[i],t); /// copy in t and transfer it into first
            }
        }
    }
        for(int i = 0;i<n;i++)
    {
       printf("%s\n",a[i]); ///print the sorted string
    }
    ///printf("Se comportaram: %d | Nao se comportaram: %d\n",g,b);
    return 0;
}

