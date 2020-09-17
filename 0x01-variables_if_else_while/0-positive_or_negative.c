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
	if (n > 0)
	{
		printf("%s", "is positive\n");
	}
	else if (n == 0)
	{
		printf("%s", "is zero\n");
	}
	else
	{
		printf("%s", "is negative\n");
	}
	return (0);
}
