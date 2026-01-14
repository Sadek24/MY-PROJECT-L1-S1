#include<stdio.h>
int main()
{
    int x;

printf("enter the number of the month");
scanf("%d",&x);

    if(x<=3 && x>0)
        printf("the season is winter");
    else if(x<=6 && x>0)
        printf("the season is ");
    else if(x<=9 && x>0)
        printf("the season is summer");
    else if(x<=12 && x>0)
        printf("the season is " );
    else printf("the number is not a month");



    return 0;
}