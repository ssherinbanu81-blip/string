#include <stdio.h>

int main() {
    char str[100], word[100], largest[100];
    int i = 0, j = 0, max = 0, k;

    scanf("%[^\n]", str);

    while (1) {

        if (str[i] == ' ' || str[i] == '\0') {

            word[j] = '\0';

            if (j > max) {
                max = j;
                for (k = 0; k <= j; k++)
                    largest[k] = word[k];
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

    printf("%s", largest);

    return 0;
}
