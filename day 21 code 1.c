/* Write a program to swap the first and last digit of a number*/




#include <stdio.h>
#include <math.h> 

int main() {
    int num, firstDigit, lastDigit, digitsCount, swappedNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a non-negative number.\n");
        return 1; 
    }

    if (num < 10) { 
        printf("Output: %d\n", num);
        return 0;
    }

    lastDigit = num % 10;
    digitsCount = (int)log10(num); 
    firstDigit = num / (int)pow(10, digitsCount);


    swappedNum = num - (firstDigit * (int)pow(10, digitsCount)) - lastDigit;

    
    swappedNum = swappedNum + (lastDigit * (int)pow(10, digitsCount));


    swappedNum = swappedNum + firstDigit;

    printf("Output: %d\n", swappedNum);

    return 0;
}
