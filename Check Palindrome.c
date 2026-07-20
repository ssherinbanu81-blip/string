#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j;
    int flag = 1;

    scanf("%s", str);

    while (str[i] != '\0')
        i++;

    for (j = 0, i = i - 1; j < i; j++, i--) {
        if (str[j] != str[i]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
