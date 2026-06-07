#include <stdio.h>

// Returns sum of digits using recursion
int sumDigits(int n) {
     // Base case
    if (n == 0) return 0;         
    return (n % 10) + sumDigits(n / 10);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of digits = %d", sumDigits(n));
    return 0;
}