#include <stdio.h>

int main() {
    printf("Choose Operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    int ch;
    scanf("%d", &ch);
    double num1, num2, result;
    if (ch >= 1 && ch <= 4) {
        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);
    }
    switch (ch) {
        case 1:
            result = num1 + num2;
            printf("Result = %.2lf\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result = %.2lf\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result = %.2lf\n", result);
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result = %.2lf\n", result);
            } else {
                printf("Are you braindead?\n");
            }
            break;
    }
    return 0;
}