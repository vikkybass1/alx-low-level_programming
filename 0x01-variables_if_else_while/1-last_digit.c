#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

    prinf("Last digit of %i is %i and is ", n, (n % 10));

    if ((n % 10) == 0)
    {
        prinf("0\n");
    }
    else if (n % 10) > 5)
    {
        prinf("greater than 5\n")
    }
    else 
    {
        printf("less than 6 and not 0\n")
    }
	return (0);
}