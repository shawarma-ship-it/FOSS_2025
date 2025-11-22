#include<stdio.h>
#include<string.h>

int main() {
    printf("Enter a word or a short sentence: ");
    char str[100];
    scanf("%[^\n]", str);

    for (int i = 0; i < strlen(str) + 2; i++) {
        printf("*");
    }

    printf("\n*%s*\n", str);

    for (int i = 0; i < strlen(str) + 2; i++) {
        printf("*");
    }

    printf("\n");
    return 0;
}