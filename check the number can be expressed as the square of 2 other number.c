#include<stdio.h>
int main()
{
  int n;
    a:
  while(scanf("%d",&n)!=EOF)
  {
      if(n!=0){
      for(int i = 1;i<=n;i++)
      {
          for(int j = 1;j<=n;j++)
          {
              if(((i*i)+(j*j))==n)
              {
                printf("YES\n");
                  goto a;
              }

          }
      }
      printf("NO\n");
  }
  }

    return 0;
}

