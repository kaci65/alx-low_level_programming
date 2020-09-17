#include <stdio.h>
/**
* main - alphabet in lowercase
* Return: 0 if successful
*/
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
		putchar('\n');
	}
	return (0);
}
