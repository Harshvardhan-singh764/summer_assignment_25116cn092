#include <stdio.h>

int rev = 0;   // Global variable to store reversed number

// Recursive function to reverse a number
void reverse(int n)
{
    if(n == 0)
        return;

    rev = rev * 10 + (n % 10);
    reverse(n / 10);
}

int main()
{
    int num;

    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    reverse(num);

    // Display reversed number
    printf("Reversed Number = %d", rev);

    return 0;
}