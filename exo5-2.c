#include<stdio.h>
int main()
{
float a,b,c,d,x1,x2;
printf("the second degree equation is writing like ax²+bx+c=0\n");
printf("put the value of a,b and c\n");
scanf("%f""%f""%f",&a,&b,&c);
d=(b*b)-(4*a*c);
if(d<0)
{
printf("the equation has no real solution\n");
}
else if(d>=0)
{
printf("the equation has real solutions\n");
x1=(-b+(sqrt(d)))/(2*a);
x2=(-b-(sqrt(d)))/(2*a);
printf("the two solutions are %f and %f\n",x1,x2);
}


    return 0;
}