#include<stdio.h>
int main()
{
    int n,y,i;
    float x,s,tem;
printf("enter the term than the value x");
scanf("%d",&n);
scanf("%f",&x);
s=0;
tem=x;
y=1;
for(i=1;i<=n;i++)
{
    s=s+ (tem/y);
    y=y+2;
    tem=tem*(-x*x);
}

printf("the term number %d is %f",n,s);

    return 0;
}