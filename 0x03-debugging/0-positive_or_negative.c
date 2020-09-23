#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - is n positive or negative
* Return: 0 if successful
*/
void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("0 is zero\n");
	}
}
