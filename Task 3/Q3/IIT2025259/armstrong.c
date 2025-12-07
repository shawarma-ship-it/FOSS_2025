#include <stdio.h>

int main() {
    printf("Enter an integer: ");
    int n;
    scanf("%d", &n);
    int s;

    for (int a = n; a > 0; a/=10) {
        int d = a % 10;
        int c = d * d * d;
        s += c;
    }

    if (s == n) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }
    return 0;
}