#include <stdio.h>
int main() {
    int n, i, d;
    int max = 0;        
    int min = 0;         

    printf("write a number: ");
    scanf("%d", &n);

    for (i = 2; i <= n/2; i++) {
        d = n % i;
        if (d == 0) {   

            if (max == 0) {   
                min = i;
                max = i;
            }
            else {
                if (i > max)
                    max = i;
                if (i < min)
                    min = i;
            }
        }
    }
     
    if (max == 0)
        printf("%d has no divisor\n", n);
    else
        printf("ssmallest divisor %d\nlargest divisor= %d\n", min, max);

    return 0;
}
