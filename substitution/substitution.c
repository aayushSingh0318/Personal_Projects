#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argv[2] != NULL)
    {
        return 1;
    }
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        //might be j = i + 1
        for (int j = i + 1; i < j; i++)
        {
            if (argv[1][i] == argv[1][j])
            {
                printf("Key must not contain repeated characters.\n");
                return 1;
            }
            else
            {

            }
        }
    }


    int alphabet_count = 0;
    //check validity
    //tests if nothing or too many arguments inputted
    if (argc < 2 || argc > 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        //makes the entire key upper case
        argv[1][i] = toupper(argv[1][i]);
        alphabet_count += 1;
        //tests if all elements of cipher are alphabetic
        if (isalpha(argv[1][i]) == false)
        {
            printf("Key must contain only alphabetic characters.\n");
            return 1;
        }


    }


    //is cipher 26 characters?
    if (alphabet_count > 26 || alphabet_count < 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }
    //test each letter for uniqueness

    string plaintext = get_string("plaintext:  ");

    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        if (isupper(plaintext[i]))
        {
            int pos = plaintext[i] - 65;
            plaintext[i] = argv[1][pos];
        }
        else if (islower(plaintext[i]))
        {
            int pos = (plaintext[i] - 97);
            plaintext[i] = tolower(argv[1][pos]);
        }
        else
        {

        }
    }
    // 97-122 is a-z
    printf("ciphertext: %s\n", plaintext);
    return 0;
}