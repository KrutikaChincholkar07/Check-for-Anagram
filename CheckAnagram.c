#include <stdio.h>
#include <string.h>

void sortString(char *str) {
    for (int i = 0; i < strlen(str) - 1; i++) {
        for (int j = i + 1; j < strlen(str); j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char s1[100], s2[100];

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    if (strlen(s1) != strlen(s2)) {
        printf("Not an anagram");
        return 0;
    }

    sortString(s1);
    sortString(s2);

    if (strcmp(s1, s2) == 0) {
        printf("Strings are anagrams");
    } else {
        printf("Not an anagram");
    }

    return 0;
}
