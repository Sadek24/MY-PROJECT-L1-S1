#include<stdio.h>
int main()
{
int n,i,t=1;
printf("type a number");
scanf("%d",&n);
    if(n<0)
        printf("the number should be positive");
    else if(n==0)
        printf("0!=1");
    else{ for(i=n;i>0;i--){
        
       t=i*t;

    }
         printf("%d!=%d",n,t);   }   


    return 0;
}