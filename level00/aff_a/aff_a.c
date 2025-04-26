#include <unistd.h>
#include <stdio.h> 
/* 
    Write a program that takes a string and displays the first 'a' character it
    encounters in it, followed by a newline.

    If there are no 'a' characters in the string, the program just writes a newline.

    If the number of parameters is not 1, the program displays 'a' followed by a newline.

*/

/* ./aff_a "abc" */

// argv[0] : ./aff_a
// argv[1] : abc

// argc : 2

/* ./aff_a "dubO a POIL" */


int main (int argc, char *argv[])
{
    if (argc == 2)
    {
        char *str = argv[1];
        int i = 0;
        while (str[i])
        {
            if (str[i] == 'a')
            {
                write(1, "a", 1);
                break ;
            }
            i++;
        }
    }
    else // argc == 1, argc == 3,4,5 ...
    {
        write(1, "a", 1);
    }

    write(1, "\n", 1);
    return 0;
}
