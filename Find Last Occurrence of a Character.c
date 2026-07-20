#include <stdio.h>

int main() {
    char str[100], ch;
    int i, pos = -1;

    scanf("%s", str);
    scanf(" %c", &ch);

    for (i = 0; str[i] != '\0'; i++) {

        if (str[i] == ch)
            pos = i;
    }

    if (pos == -1)
        printf("Not Found");
    else
        printf("%d", pos);

    return 0;
}
