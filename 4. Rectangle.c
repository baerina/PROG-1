#include <stdio.h>

int main() {

    int lines = 1;
    int stars = 1;
    char aster = '*';

    while (lines <= 3) {
        stars = 1;

        while (stars <= 10) {
            printf("%c", aster);
            stars++;
        }

        printf("\n");
        lines++;
    }
}
