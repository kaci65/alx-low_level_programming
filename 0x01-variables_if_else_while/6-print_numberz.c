#include <stdio.h>
/**
* main - single digit numbers from zero to nine
* Return: 0 if successful
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num);
	}
	putchar('\n');

	return (0);
}
