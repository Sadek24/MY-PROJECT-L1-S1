#include <stdio.h>
int main() {
    int n, i, j, num;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        // print leading spaces for triangle shape
        for 
        (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        num = 1;  // first value in each row is always 1
        for 
        (j = 0; j <= i; j++) {
            printf("%d ", num);
            num = num * (i - j) / (j + 1); // compute next binomial coefficient
        }
        printf("\n");
    }

    return 0;
}