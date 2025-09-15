/*Write a program to check if a number is a perfect number.*/



#include <stdio.h>

int main() {
    int num, sum_of_divisors = 0;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check for proper divisors and calculate their sum
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum_of_divisors += i;
        }
    }

    // Compare the sum of divisors with the original number
    if (sum_of_divisors == num) {
        printf("Perfect number\n");
    } else {
        printf("Not perfect number\n");
    }

    return 0;
}
