#include <stdio.h>
/**
* main - alphabet in lowercase in reverse
* Return: 0 if successful
*/
int main(void)
{
	char reverse;

	for (reverse = 'z'; reverse <= 'a'; reverse++)
	{
		putchar(reverse);
	}
	putchar('\n');

	return (0);
}
