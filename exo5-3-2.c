#include <stdio.h>
#include <math.h>

int main() {
    
    int i = 0, d, r, b = 0; 
    // d: decimal number, r: remainder, b: binary number

    printf("Enter a decimal integer: ");
    scanf("%d", &d);

    while (d != 0) {
        r = d % 2;
        d /= 2;
        b += r * pow(10, i);
        i++;
    }

    printf("Binary equivalent: %d\n", b);

    return 0;
}
