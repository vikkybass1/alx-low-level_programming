#include "main.h"

/**
 * Print alphabet in lowercase 10 times
 * 
 */

void print_alphabet_x10(void)
{
    char alpha;
    int counter;

    for (counter = 1; counter <= 10; counter++)
    {
        for (alpha = 'a'; alpha <= 'z'; alpha++)
        {
            _putchar(alpha);
            alpha++;
        }   
    }
}
