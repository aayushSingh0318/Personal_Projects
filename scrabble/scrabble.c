#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    //convert both words to lower case using two seperate for loops
    for (int i = 0, n = strlen(word1); i < n; i++)
    {
        word1[i] = tolower(word1[i]);
    }

    for (int i = 0, n = strlen(word2); i < n; i++)
    {
        word2[i] = tolower(word2[i]);
    }

    // Score both words
    //now both word1 and word2 are already lowercase
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    //if statements for one greater than the other, and else for tie
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int compute_score(string word)
{
    // 97-122 is a-z
    //for loop through word; if punctuation, word_score unaffected
    int word_score = 0;
    for (int i = 0, n = strlen(word); i < n; i++)
    {
        if (word[i] > 122 || word[i] < 97)
        {
            //if punctuation, score is unaffected
        }
        else
        {
            //word sccore is updated every new letter
            word_score += POINTS[word[i] - 97];
        }
    }
    return word_score;
    // TODO: Compute and return score for string
}
