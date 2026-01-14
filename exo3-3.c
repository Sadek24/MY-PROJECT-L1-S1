#include<stdio.h>
#include<stdlib.h> //to use rand and srand
#include<time.h> //valeure de i
int main()
{
int x,i;
    // give a rand number betwen 1 and 20
    srand(time(NULL));
    i = rand()%20+1;

    printf("enter a number betwen 1 and 20 please \n");
  do // here the complier compare the number x with i until x=i
    {
     scanf("%d",&x);
      if(x<i)
        printf("too low ! try again \n");
      else if(x>i)
        printf("too high ! try again \n");
    }
  while (x!=i);

    printf("bravo !!! the number was %d",i);


    return 0;
}