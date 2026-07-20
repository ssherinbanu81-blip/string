#include <stdio.h>
#include <string.h>

int main() {
    char str[100], word[20][20];
    int i = 0, j = 0, w = 0;

    scanf("%[^\n]", str);

    while (1) {

        if (str[i] == ' ' || str[i] == '\0') {

            word[w][j] = '\0';
            w++;
            j = 0;

            if (str[i] == '\0')
                break;
        }
        else {
            word[w][j++] = str[i];
        }

        i++;
    }

    for (i = w - 1; i >= 0; i--)
        printf("%s ", word[i]);

    return 0;
}
