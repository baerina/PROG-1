#include <stdio.h>

int main() {

    int row = 1;
    int column = 1;
    char aster = '*';

    while (row <= 5) {
        column = 1;

        while (column <= row) {
            printf("%c", aster);
            column++;
        }

        printf("\n");
        row++;
    }

    return 0;
}

