#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int len = strlen(str);
    for (i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    printf("Enter a string: ");
    scanf("%s", str);

    strcpy(reverse_str, str);
    reverseString(reverse_str);

    if (strcmp(str, reverse_str) == 0) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}

