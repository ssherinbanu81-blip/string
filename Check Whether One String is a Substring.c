#include <stdio.h>
#include <string.h>

int main() {
    char str[100], sub[50];

    scanf("%s", str);
    scanf("%s", sub);

    if (strstr(str, sub))
        printf("Substring Found");
    else
        printf("Substring Not Found");

    return 0;
}
