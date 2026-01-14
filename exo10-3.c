#include <stdio.h>
#include <stdbool.h>

// Function to test if a number is prime
bool isPrime(long long x) {
    if (x < 2) return false;
    for (long long i = 2; i * i <= x; i++) {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main() {
    int found = 0;

    // Try values of n until 5 perfect numbers are found
    for (int n = 2; found < 5; n++) {
        long long mersenne = (1LL << n) - 1;         // 2^n − 1

        if (isPrime(mersenne)) {                    // Check if Mersenne is prime
            long long perfect = (1LL << (n - 1)) * mersenne;  // Perfect number formula

            printf("%lld\n", perfect);
            found++;
        }
    }

    return 0;
}
