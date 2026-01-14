#include <stdio.h>

int main() {
    int n, i, sum;

    printf("Type the last number of the sum: ");
    scanf("%d", &n);

    sum = 0;
    for(i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("The sum of the integers from 1 to %d is %d\n", n, sum);

    return 0;
}
