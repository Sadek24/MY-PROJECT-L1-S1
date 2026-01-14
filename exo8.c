#include<stdio.h>
#include<math.h>
int main()
{
    float VAT,TOTAL,price,quantity;

    printf("enter the price of the product \n");
    scanf("%f",&price);
    printf( "enter the number of item\n");
    scanf("%f",&quantity);
    printf("enter the VAT rate ");
    scanf("%f",&VAT);
    TOTAL = price * quantity + (price * quantity * VAT / 100);
    printf("the total amount to pay is %f\n", TOTAL);

    return 0;
}

