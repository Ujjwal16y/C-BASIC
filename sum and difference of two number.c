#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b,sum=0,diff=0;
    float c,d,sum1=0,diff1=0;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
    sum=a+b;
    diff=a-b;
    sum1=c+d;
    diff1=c-d;
    printf("%d %d\n",sum,diff);
    printf("%.1f %.1f",sum1,diff1);


    return 0;
}
