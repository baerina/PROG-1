#include <stdio.h>

int main() {

    int row = 1;
    int column = 1;
    char aster = '*';

    while (row <= 3) {
        column = 1;

        while (column <= 10) {
            printf("%c", aster);
            column++;
        }

        printf("\n");
        row++;
    }
}
