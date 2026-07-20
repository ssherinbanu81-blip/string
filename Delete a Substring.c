#include <stdio.h>

int main() {
    char str[100], sub[50];
    int i, j, k, found = 0;

    scanf("%s", str);
    scanf("%s", sub);

    for (i = 0; str[i] != '\0'; i++) {

        for (j = 0; sub[j] != '\0'; j++) {
            if (str[i + j] != sub[j])
                break;
        }

        if (sub[j] == '\0') {

            found = 1;

            for (k = i; str[k + j] != '\0'; k++)
                str[k] = str[k + j];

            str[k] = '\0';
            break;
        }
    }

    if (found)
        printf("%s", str);
    else
        printf("Substring Not Found");

    return 0;
}
