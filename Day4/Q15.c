#include <stdio.h>

int main()
{
//ld = last digit of number
    int n, temp, ld, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(n> 0)
    {
        ld = temp % 10;
        sum = sum + ld * ld* ld;
        temp = temp / 10;
    }

    if(sum == n)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}