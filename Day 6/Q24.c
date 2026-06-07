#include <stdio.h>

int main()
{
    int x, n, i;
    long long result = 1;

    // Taking input from user
    printf("Enter base (x): ");
    scanf("%d", &x);

    printf("Enter power (n): ");
    scanf("%d", &n);

    // Calculate x^n without using pow()
    for(i = 1; i <= n; i++)
    {
        result = result * x;
    }

    // Display result
    printf("%d^%d = %lld", x, n, result);

    return 0;
}