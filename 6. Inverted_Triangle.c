#include <stdio.h>

int main() {

    int lines = 5;
    int stars;
    char aster = '*';

    while (lines >= 1) {

        stars = 1;

        while (stars <= lines) {
            printf("%c", aster);
            stars++;
        }

        printf("\n");
        lines--;
    }
}
