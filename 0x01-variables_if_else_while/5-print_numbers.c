#include <stdio.h>
/**
* main - show numbers zero to nine
* Return: 0 if successful
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	putchar('\n');
	return (0);
}
