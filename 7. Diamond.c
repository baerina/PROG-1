#include <stdio.h>

int main() {
int row=1;
int space;
char aster= '*';
    
    while(row<=5){
        space=1;
        while (space<=5-row){
            printf("-");
            space++;
        }
        space=1;
        while(space<= (2*row) -1){
            printf("%c", aster);
            space++;
        }
        printf("\n");
        row++;
    }
    row = 4;

    while (row >= 1) {
        space = 1;

        while (space <= 5 - row) {
            printf("-");
            space++;
        }

        space = 1;

        while (space <= (2 * row) - 1) {
            printf("%c", aster);
            space++;
        }

        printf("\n");
        row--;
    }
}
