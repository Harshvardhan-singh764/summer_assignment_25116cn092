#include <stdio.h>

// Returns the nth Fibonacci number
int fib(int n) {
     // Base cases
    if (n <= 1) return n; 
 // Recursive calls
    return fib(n - 1) + fib(n - 2); 
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");
    for (int i = 0; i < n; i++)
        printf("%d ", fib(i));

    return 0;
}