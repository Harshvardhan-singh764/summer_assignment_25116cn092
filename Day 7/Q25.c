#include <stdio.h>

// Returns factorial using recursion
int fact(int n) {
// Base case
    if (n <= 1) return 1; 
// Recursive call
    return n * fact(n - 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial = %d", fact(n));
    return 0;
}