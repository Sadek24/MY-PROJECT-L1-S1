#include<stdio.h>
int main()
{
float x,y;
    printf("enter the x and y coordinates of a point\n");
    scanf("%f",&x);
    scanf("%f",&y);
        if(x>=0 && y>=0)
            printf("the point is in the case A\n");
            else if(x<=0 && y<=0)
            printf("the point is in the case C\n");
                else if(x>0 && y<0)
                printf("the point is in the case D\n");
                    else 
                    printf("the point is in the case B\n");

    return 0;
}