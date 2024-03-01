///Find angles beetween clock 2 kata hour and minute;

#include<stdio.h>
#include<math.h>
int main()
{
    int h,m;
    scanf("%d %d",&h,&m);
    float d = ((float)abs(h*60-11*m)/2);
   // if(d>180) d = 360-d;
    printf("%.7f",d);
    return 0;
}

