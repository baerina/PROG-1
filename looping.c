/* 
Problem: Write a C program that asks the user
to enter a character and then prints that
character 5 times using a for loop. 
*/

#include <stdio.h>

int main() {
    char letter;

    printf("Enter a character: ");
    scanf(" %c", &letter);

    for (int i = 1; i <= 5; i++) {
        printf("%c\n", letter);
    }

    return 0;
}

/* 
How it works: 
1. char letter; - Creates a variable named 'letter' that can store one character. 

2. printf("Enter a character: "); 
- Asks the user to enter a character. 

3. scanf(" %c", &letter); 
- Gets the character entered by the user and stores it in 'letter'. 

4. for (int i = 1; i <= 5; i++) 
- Creates a loop that starts at 1. 
- The loop continues while 'i' is less than or equal to 5. 
- 'i++' adds 1 to 'i' after every loop. 

5. printf("%c\n", letter); 
- Prints the character stored in 'letter'. 
- %c is used for characters. 
- \n moves the output to the next line. 

The loop runs 5 times, so the character entered by the user is printed 5 times. 

Example: If the user enters: 
A Output: 
A 
A 
A 
A 
A 
*/
