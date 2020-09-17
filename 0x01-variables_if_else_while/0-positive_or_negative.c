#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - is variable n positive or negative
 * Return: 0 if successful
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("is negative\n");
	}
	else if (n > 0)
	{
		printf("is positive\n");
	}
	else
	{
		printf("is zero\n");
	}
	return (0);
}
