#include <stdio.h>

int main() {
    char str[100], oldChar, newChar;
    int i;

    scanf("%s", str);
    scanf(" %c", &oldChar);
    scanf(" %c", &newChar);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == oldChar)
            str[i] = newChar;
    }

    printf("%s", str);

    return 0;
}
