#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Compare and print the largest
    if(num1 > num2) {
        printf("%d is the largest.\n", num1);
    }
    else if(num2 > num1) {
        printf("%d is the largest.\n", num2);
    }
    else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}

