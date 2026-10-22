#include <stdio.h>

int main(void) {
    char text[100];
    int length = 0;
    int isPalindrome = 1;

    printf("Enter any string: ");
    scanf("%99s", text);

    while (text[length] != '\0') {
        length++;
    }

    for (int i = 0; i < length / 2; i++) {
        if (text[i] != text[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("The given string is a Palindrome.\n");
    } else {
        printf("The given string is not a Palindrome.\n");
    }

    return 0;
}