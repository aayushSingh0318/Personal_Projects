#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    string text = get_string("Text: ");
    int letters = 0;
    int sentences = 0;
    int words = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if ((text[i] >= 65 && text [i] <= 90) || (text[i] >= 97 && text [i] <= 122))
        {
            letters += 1;
        }
        //these are the ASCII values for ending a sentence punctuation (.,!,?)
        else if (text[i] == 33 || text[i] == 63 || text[i] == 46)
        {
            sentences += 1;
        }
        //ASCII value of spaces is 32
        else if (text[i] == 32)
        {
            words += 1;
            //outside the loop remember to add 1 to the value of words
        }

    }
    words += 1;

    //TO DEBUG: printf("%i %i %i\n", words, sentences, letters);
    float l = ((float) letters / (float)words) * 100;
    float s = ((float) sentences / (float)words) * 100;

    float index = (0.0588 * l) - (0.296 * s) - 15.8;
    index = round(index);
    //TO DEBUG:
    //printf("%i", index);

    int index_final = index;
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index_final);
    }
}