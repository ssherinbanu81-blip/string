#include <stdio.h>
#include <string.h>

int main() {
    char str[100], oldSub[50], newSub[50], result[150];
    char *p;

    scanf("%s", str);
    scanf("%s", oldSub);
    scanf("%s", newSub);

    p = strstr(str, oldSub);

    if (p == NULL) {
        printf("Substring Not Found");
        return 0;
    }

    int index = p - str;

    strncpy(result, str, index);
    result[index] = '\0';

    strcat(result, newSub);
    strcat(result, p + strlen(oldSub));

    printf("%s", result);

    return 0;
}
