#include <stdio.h>
#include <string.h>

int main() {
    char str[100], sub[50];
    char *p;

    scanf("%s", str);
    scanf("%s", sub);

    p = strstr(str, sub);

    if (p)
        printf("%ld", p - str);
    else
        printf("Not Found");

    return 0;
}
