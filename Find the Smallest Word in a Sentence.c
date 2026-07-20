#include <stdio.h>

int main() {
    char str[100], word[100], small[100];
    int i = 0, j = 0, min = 100, k;

    scanf("%[^\n]", str);

    while (1) {

        if (str[i] == ' ' || str[i] == '\0') {

            word[j] = '\0';

            if (j < min && j != 0) {
                min = j;
                for (k = 0; k <= j; k++)
                    small[k] = word[k];
            }

            j = 0;

            if (str[i] == '\0')
                break;
        }
        else {
            word[j++] = str[i];
        }

        i++;
    }

    printf("%s", small);

    return 0;
}
