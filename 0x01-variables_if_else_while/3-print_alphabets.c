#include <stdio.h>
/**
* main - alphabet in lowercase and uppercase
* Return: 0 if successful
*/
int main(void)
{
	char low;
	char up;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}
	/* print uppercase letters */
		for (up = 'A'; up <= 'Z'; up++)
		{
			putchar(up);
		}
		putchar('\n');

	return (0);
}
