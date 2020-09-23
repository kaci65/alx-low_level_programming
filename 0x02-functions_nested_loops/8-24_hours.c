#include <stdio.h>
#include <time.h>
#include "holberton.h"
/**
*jack_bauer - print every minute starting from 00:00 to 23:59
*Return: void
*/
void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0; a <= 2; a++)
	{
		for (b = 0; b <= 3; b++)
		{
			for (c = 0; c <= 5; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					if (a < 2)
					{
						_putchar('0' + a);
						_putchar('0' + b);
						_putchar(':');
						_putchar('0' + c);
						_putchar('0' + d);
						_putchar('\n');
					}
					else if ((a == 2) && (b <= 3))
					{
						_putchar('0' + a);
						_putchar('0' + b);
						_putchar(':');
						_putchar('0' + c);
						_putchar('0' + d);
						_putchar('\n');
					}
				}
			}
		}
	}
}
