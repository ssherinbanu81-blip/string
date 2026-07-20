#include <stdio.h>
#include <string.h>

int main() {
    char str[100], sub[50];
    int count = 0, len;

    scanf("%s", str);
    scanf("%s", sub);

    len = strlen(sub);

    char *p = str;

    while ((p = strstr(p, sub)) != NULL) {
        count++;
        p += len;
    }

    printf("%d", count);

    return 0;
}
