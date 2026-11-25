#include <stdio.h>
#include <string.h>

int checkPalindrome(char word[]);

int main()
{
    char word[100];

    printf("Enter a word: ");
    scanf("%99s", word);

    if (checkPalindrome(word))
    {
        printf("%s is a palindrome!\n", word);
    }
    else
    {
        printf("%s is not a palindrome!\n", word);
    }

    return 0;
}

int checkPalindrome(char word[])
{
    int length = strlen(word);

    for (int i = 0; i < length / 2; i++)
    {
        if (word[i] != word[length - 1 - i])
        {
            return 0;
        }
    }

    return 1;
}
