#include <stdio.h>

int main() {
    char str[100], ch;
    int pos, i, len = 0;

    scanf("%s", str);
    scanf("%d", &pos);
    scanf(" %c", &ch);

    while (str[len] != '\0')
        len++;

    for (i = len; i >= pos; i--)
        str[i + 1] = str[i];

    str[pos] = ch;

    printf("%s", str);

    return 0;
}
