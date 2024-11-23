#include<stdio.h>

int main() {
    int a, b;
    printf("Enter numbers: ");
    scanf("%d%d", &a, &b);

    char operation;
    printf("Enter operation (p for product, s for sum, d for difference, q for quotient, r for remainder): ");
    scanf(" %c", &operation);  // Note the space before %c to ignore any leading whitespace

    switch(operation) {
        case 's':
            printf("The sum of the two numbers is %d\n", a + b);
            break;
        case 'd':
            printf("The difference of the two numbers is %d\n", a - b);
            break;
        case 'p':
            printf("The product of the two numbers is %d\n", a * b);
            break;
        case 'q':
            if (b != 0) {
                printf("The quotient of the two numbers is %d\n", a / b);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        case 'r':
            if (b != 0) {
                printf("The remainder of the two numbers is %d\n", a % b);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("You have entered a wrong operation\n");
    }

    return 0;
}
