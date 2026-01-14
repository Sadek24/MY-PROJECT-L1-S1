#include<stdio.h>
int main()
{
    int n,i,sum;
printf("type the last number of the sum\n");
scanf("%d",&n);

        i=0;
        sum=0;
    do
    {
       i++;
        sum=sum+i;
    
    } 
    while (i<n);  

printf("the sum of the integer number is %d",sum);



    return 0;
}