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
    // ./a.out "abc" | cat -e

    // argv[0] : ./a.out
    // argv[1] : abc
    // argc : 2
    if (argc != 2)
    {
        write(1, "a", 1);
    }
    else
    {
        int i = 0;
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] == 'a') 
            {
                write(1, "a", 1);
                break;
            }
            i++;
        }
    }
    write (1, "\n", 1);
    return 0;
}
