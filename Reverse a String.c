#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j;
    char temp;

    scanf("%s", str);

    while (str[i] != '\0')
        i++;

    for (j = 0, i = i - 1; j < i; j++, i--) {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
    }

    printf("%s", str);

    return 0;
}
