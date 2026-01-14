#include<stdio.h>
int main()
{
float x,y;
    printf("type two number");
    scanf("%f",&x);
    scanf("%f",&y);
        if(x>0 && y>0 || x<0 && y<0)
            printf("the product of the two number is positive");
        else if (x==0 || y==0)
             printf("the product of the two number is zero");
        else 
           printf("the product of the two number is negative");





    return 0;
}