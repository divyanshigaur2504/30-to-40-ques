/*Write a program to find the HCF (GCD) of two numbers.*/




int main() {
    int num1, num2;


    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);


    printf("The HCF (GCD) of %d and %d is: %d\n", num1, num2);

    return 0;
}

int findHCF(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

