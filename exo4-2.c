#include<stdio.h>
int main()
{
int a,b,c,d,x,y,s,f;
printf("put the depart time");
scanf("%d""%d",&a,&b);
printf("put the depart time");
scanf("%d""%d",&c,&d);
a=a*60;
c=c*60;
x=a+b;
y=c+d;
s=y-x;
f=s%60;
s=s/60;
printf("the flight duration is%d:%d",s,f);

    return 0;
}