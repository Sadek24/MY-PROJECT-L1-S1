#include<stdio.h>
int main()
{
int n,i,sum;
for ( n = 2; n < 1000; n++)
    {sum = 0;
        for ( i = 1; i < n-1; i++)
         {
            if ((n%i)==0)
            {
            sum = sum +i;
            }
        }
    if (n==sum)
        {
   printf("%d is perfect number \n",n);
        }

    }
    return 0;
}