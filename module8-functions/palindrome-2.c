//INSTRUCTIONS: Create a program where the user will input a word and the lenght of the word will be dissregarded and still be determined if its palindrome or not.
//This is the first version.

#include <stdio.h>
#include <string.h>

int checkPalindrome(char word[]);

int main() {
  char word[100];

    printf("Enter a word: ");
    scanf("%99s", word); 

  if (checkPalindrome(word)) {
    printf("%s is a palindrome!\n", word);
  }
    else {
    printf("%s is not a palindrome!\n", word);
    }
  return 0;
}

int checkPalindrome(char word[]) {
  int lenght = strlen(word);

for (int i = 0; i < lenght / 2; i++) {
    if (word[i] != word[lenght - 1 - i]) {
          return 0;
    }  
}
return 1;
}

//The user will input a word and this code will determine whether its a palindrome or not.

