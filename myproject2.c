#include <stdio.h>
#include <math.h>

// 1. Surface of a Circle
void surfcircle() {
    float surf, P, r;
    P = 3.1415;
    
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    
    surf = r * r * P;
    
    printf("The surface of the circle is: %.2f\n", surf); 
    // %.2f limits it to 2 decimal places
}

// 2. Sum of Two Numbers
void sumoftwonumber() {
    int a, b, c;
    
    printf("Enter two integer numbers:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    
    // FIX: Calculation must happen AFTER scanf
    c = a + b; 
    
    printf("The sum: %d + %d = %d\n", a, b, c);
}

// 3. Product of Two Numbers
void productoftwonumber() {
    int a, c, b;
    
    printf("Enter two integer numbers:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    
    
    c = a * b; 
    
    printf("The product: %d * %d = %d\n", a, b, c);
}

// 4. Decimal to Binary
void decimaltobinary() {
    int i = 0, d, r; 
    int b = 0;
    
    printf("Enter a decimal integer: ");
    scanf("%d", &d);


    while (d != 0) {
        r = d % 2;
        d /= 2;
        b += r * pow(10, i);
        i++;
    }

    printf("Binary equivalent: %lld\n", b);
}

int main() {
    int n;
    
    printf("Welcome to my program!\n");
    printf("1. Sum of two numbers\n");
    printf("2. Product of two numbers\n");
    printf("3. Surface of a circle\n");
    printf("4. Convert Decimal to Binary\n");
    printf("------------------------------\n");
    printf("Please enter your choice (1-4): ");

    // Input Validation Loop
    do {
        scanf("%d", &n);
        
        if (n < 1 || n > 4) {
            printf("Invalid choice. Please enter a number between 1 and 4: ");
        }
        
    } while (n < 1 || n > 4);

    if (n == 1) 
    {
        sumoftwonumber();
    } 
    else if (n == 2)
    {
        productoftwonumber();
    } 
    else if (n == 3) 
    {
        surfcircle();
    } 
    else if (n == 4) {
        decimaltobinary();
    }

    return 0;
}