#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main.c - tests function that print if integer is positive or negative
 *return: 0
 *Return: Always 0 (Success)
 */

void positive_or_negative(int i)
{
	int i;

	srand(time(0));
	i = rand() - RAND_MAX / 2;

	if (i > 0)
	{
		printf("%i is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%i is zero\n", i);
	}
	else if (i < 0)
	{
		printf("%i is negative\n", i);
	}

	return (0);
}


int main(void)
{
    int i;

    i = 98;
    positive_or_negative(i);

    return (0);
}
