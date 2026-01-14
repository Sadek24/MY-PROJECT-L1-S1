#include <stdio.h>

int main() {
    int num, first, last, temp, multiplier = 1, swapped;

    printf("Enter number: ");
    scanf("%d", &num);

    temp = num;
    last = temp % 10;  // last digit

    // Find the first digit and the multiplier for the first digit
    while (temp >= 10) {
        temp = temp / 10;
        multiplier *= 10; // 10^(number of digits - 1)
    }
    first = temp; // first digit

    // Remove first and last digit from original number
    int middle = num % multiplier;  // remove first digit
    middle = middle / 10;           // remove last digit

    // Construct swapped number
    swapped = last * multiplier + middle * 10 + first;

    printf("After swapping first and last digit: %d\n", swapped);

    return 0;
}