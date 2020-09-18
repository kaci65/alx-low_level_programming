#include <stdio.h>
/**
* main - show numbers zero to nine seperated by commas and spaces
* Return: 0 if successful
*/
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(number);
	}
	/* print uppercase letters */
		if (number != 9)
		{
			putchar(',');
		}
		else
		{
			putchar(' ');
		}
		putchar('\n');

	return (0);
}
