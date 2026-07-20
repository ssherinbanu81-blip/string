#include <stdio.h>

int main() {
    char str[100], ch;
    int i, flag = 0;

    scanf("%s", str);
    scanf(" %c", &ch);

    for (i = 0; str[i] != '\0'; i++) {

        if (str[i] == ch) {
            printf("%d", i);
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Not Found");

    return 0;
}
