#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //get user input detailing the user's name
    string name = get_string("What's your name? ");
    //print hello and then the name specified above
    //start on new line
    printf("hello, %s\n", name);
}