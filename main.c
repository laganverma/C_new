#include <stdio.h>

int main() {

    int calculator;
    int first_number, second_number;
    int result, i, fact = 1;
    printf("\n\nEnter an operation \n\n1.Addition \t\t2.Subtraction \n3.Multiplication \t4.Division\n5.Square Root\t\t6.Factorial\n\n ");
    printf("Enter operation you want to perform =  ");
    scanf("%d", &calculator);

    switch (calculator) {
        case 1:
            printf("\n\nEnter First Number: ");
            scanf(" %d", &first_number);
            printf("Enter Second Number: ");
            scanf(" %d", &second_number);
            result = first_number + second_number;
            printf("\nAddition of two numbers is: %d", result);
            printf("\n\n");
            break;
        case 2:
            printf("\n\nEnter First Number: ");
            scanf(" %d", &first_number);
            printf("Enter Second Number: ");
            scanf(" %d", &second_number);
            result = first_number - second_number;
            printf("\nSubrtaction of two numbers is: %d", result);
            printf("\n\n");
            break;
        case 3:
            printf("\n\nEnter First Number: ");
            scanf(" %d", &first_number);
            printf("Enter Second Number: ");
            scanf(" %d", &second_number);
            result = first_number * second_number;
            printf("\nMultiplication of two numbers is: %d", result);
            printf("\n\n");
            break;
        case 4:
            printf("\n\nEnter First Number: ");
            scanf(" %d", &first_number);
            printf("Enter Second Number: ");
            scanf(" %d", &second_number);
            result = first_number / second_number;
            printf("\nDivision of two numbers is: %d", result);
            printf("\n\n");
            break;
        case 5:
            printf("\n\nEnter Number: ");
            scanf(" %d", &first_number);
            result = first_number * first_number;
            printf("Square root of %d is ", first_number, result);
            printf("\n\n");
            break;
        case 6:
            printf("\n\nEnter a number: ");
            scanf("%d", &first_number);
            for (i = 1; i <= first_number; i++) {
                fact = fact * i;
            }
            printf("Factorial of %d is %d", first_number, fact);
            printf("\n\n");
            break;
        default:
            printf("Error! operator is not correct");
    }
    return 0;
}
