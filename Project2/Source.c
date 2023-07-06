#include <stdio.h>

int main() {
    int n;
    printf("Enter a natural number n (1 < n < 150): ");
    scanf("%d", &n);

    if (n <= 1 || n >= 150) {
        printf("Invalid input. Please enter a natural number n (1 < n < 150).\n");
        return 0;
    }

    int count = 0; // counter for equal divisors

    for (int i = 1; i <= n; i++) {
        if (n % i == n / i) { // checking the quotient and remainder of division
            count++;
        }
    }

    printf("The number of equal divisors of %d is %d\n", n, count);

    return 0;
}
