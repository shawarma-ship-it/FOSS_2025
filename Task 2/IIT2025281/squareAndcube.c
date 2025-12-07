#include <stdio.h>
int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    printf("\n%-8s | %-8s | %s\n", "Number", "Square", "Cube");
    for (int i = 1; i <= n; i++) {
        printf("%-8d | %-8d | %d\n", i, (i * i), (i * i * i));
    }
  return 0;
}
