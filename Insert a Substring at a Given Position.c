#include <stdio.h>

int main() {
    char str[100], sub[50], result[150];
    int pos, i, j = 0, k = 0;

    scanf("%s", str);
    scanf("%s", sub);
    scanf("%d", &pos);

    for (i = 0; i < pos; i++)
        result[k++] = str[i];

    while (sub[j] != '\0')
        result[k++] = sub[j++];

    while (str[i] != '\0')
        result[k++] = str[i++];

    result[k] = '\0';

    printf("%s", result);

    return 0;
}
