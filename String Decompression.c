#include <stdio.h>

int main() {
    char str[100];
    int i, j;

    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i += 2) {

        for (j = 0; j < str[i + 1] - '0'; j++)
            printf("%c", str[i]);
    }

    return 0;
}
