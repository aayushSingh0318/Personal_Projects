#include <cs50.h>
#include <stdio.h>

int get_height(void)
{
    //do while gets user input until user provides number between 1 and 8 inclusive of the numbers
    int pyramid_height;
    do
    {
        pyramid_height = get_int("What is the pyramid's height ");
    }
    while (pyramid_height < 1 || pyramid_height > 8);
    //return a height
    return pyramid_height;
}

int main(void)
{
    //i is the row, j is the indivual spaces on each line, k is the column
    int height, i, j, k;
    //calls method to return height
    height = get_height();
    //for loop through rows until row = height
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < height - 1 - i; j++)
        {
            printf(" ");
        }
        for (k = 0; k <= i; k++)
        {
            //prints left side hashes
            printf("#");
        }

        //print 2 spaces between two pyramids
        printf("  ");
        //printing the right side after the two spaces
        for (k = 0; k <= i; k++)
        {
            printf("#");
        }
        //takes to next line
        printf("\n");

    }
}

