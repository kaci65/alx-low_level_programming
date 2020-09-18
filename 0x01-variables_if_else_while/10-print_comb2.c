#include <stdio.h>
/**
* main - 0 to 99 in double digits, seperated by commas and spaces
* Return: 0 if successful
*/
int main(void)
{
	int number;

	for (number = 0; number < 99; number++)
	{
		putchar(number + '0');

	/* print uppercase letters */
		if (number != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');

	return (0);
}
