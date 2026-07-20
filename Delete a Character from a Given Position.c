#include <stdio.h>

int main() {
    char str[100];
    int pos, i;

    scanf("%s", str);
    scanf("%d", &pos);

    for (i = pos; str[i] != '\0'; i++)
        str[i] = str[i + 1];

    printf("%s", str);

    return 0;
}
