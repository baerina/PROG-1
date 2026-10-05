#include <stdio.h>

int main() {
    int row;
    int space;
    int count = 5;
    char aster= '*';

    row = 1;
    while(row<=count) {
        space = 1;
        
        while (space <= count - row){
            printf("-");
            space++;
        }
        space = 1;
        while(space <= 2 * row - 1){
            printf("%c", aster);
            space++;
        }
        printf("\n");
        row++;
    }
    row = 4;

    while (row >= 1) {
        space = 1;

        while (space <= count - row) {
            printf("-");
            space++;
        }

        space = 1;

        while (space <= 2 * row - 1) {
            printf("%c", aster);
            space++;
        }

        printf("\n");
        row--;
    }
}
