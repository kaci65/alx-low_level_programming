#include <stdio.h>
/**
* main - alphabet in lowercase except q and e
* Return: 0 if successful
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
		putchar('\n');

	return (0);
}
