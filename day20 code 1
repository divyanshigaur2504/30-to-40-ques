#include <stdio.h>

int product_of_odd_digits(int num) {
    int product = 1;
    int has_odd = 0;
    int digit;

    while (num > 0) {
        digit = num % 10;
        if (digit % 2 == 1) { 
            product *= digit;
            has_odd = 1;
        }
        num /= 10;
    }


    if (!has_odd) {
        return 1;
    }
    return product;
}

int main() {
    int number;

    
    printf("Enter the number: ");
    scanf("%d", &number);

    printf("%d\n", product_of_odd_digits(number));

    return 0;
}
o
