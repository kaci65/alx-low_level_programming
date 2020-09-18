#include <stdio.h>
/**
* main - 0 to 99 in double digits, seperated by commas and spaces
* Return: 0 if successful
*/
int main(void)
{
	int number1;
	int number2;

	for (number1 = 0; number1 < 99; number1++)
	{
		for (number2 = 0; number2 < 99; number2++)
		{
			putchar((number1 + '0') && (number2 + '0'));

	/* print uppercase letters */
			if (number1 != 99 && number2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
