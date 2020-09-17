#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - assign random number to n
* Return: 0 if successful
*/
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, x);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, x);
	}
	else if (n < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
	}
	return (0);
}
