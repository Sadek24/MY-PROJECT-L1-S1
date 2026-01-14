#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter the first integer number: ");
    scanf("%d", &x);
    printf("Enter the second integer number: ");
    scanf("%d", &y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("After swapping:\n");
    printf("First number = %d\n", x);
    printf("Second number = %d\n", y);
    return 0;
}
