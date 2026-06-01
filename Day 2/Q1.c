#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
       //last digit
        digit = num % 10; 
      // Add digit to sum
        sum += digit;  
      // Remove last digit
        num = num / 10;     
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}