#include<stdio.h>
#include<math.h>
int main()
{
int x;
float p,t;
printf("type the number of the copie\n");
scanf("%d",&x);
    if(x<=10){
        p=2.0;
        t=p*x;
        printf("the total amount is %f",t);
        }
    else if (x<20){
        p=1.5;
        t=p*x;
        printf("the total amount is %f ",t);
        }
    else{
        p=1.0;
        t=p*x;
        printf("the total amount is %f ",t);

        } 

    return 0;
}