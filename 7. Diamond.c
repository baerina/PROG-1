#include <stdio.h>

int main() {

    int row = 1;
    int column = 1;
    char aster = '*';

    while (row <= 5) {
        column = 1;

        while (column <= 5 - row) {
            printf(" ");
            column++;
        }

        column = 1;

        while (column <= (2 * row) - 1) {
            printf("%c", aster);
            column++;
        }

        printf("\n");
        row++;
    }

    row = 4;

    while (row >= 1) {
        column = 1;

        while (column <= 5 - row) {
            printf(" ");
            column++;
        }

        column = 1;

        while (column <= (2 * row) - 1) {
            printf("%c", aster);
            column++;
        }

        printf("\n");
        row--;
    }

    return 0;
}
