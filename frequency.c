#include <stdio.h>

int main(void) {
    char text[100];
    int counted[100] = {0};
    int length = 0;

    printf("Enter any string: ");
    scanf("%99s", text);

    while (text[length] != '\0') {
        length++;
    }

    printf("Frequency of each letter:\n");

    for (int i = 0; i < length; i++) {
        if (counted[i]) {
            continue;
        }

        int count = 1;

        for (int j = i + 1; j < length; j++) {
            if (text[i] == text[j]) {
                count++;
                counted[j] = 1;
            }
        }

        printf("%c => %d\n", text[i], count);
    }

    return 0;
}