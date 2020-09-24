#include <stdio.h>
/**
* main - print numbers from 1 to 100
* for multiples of 3 print Fizz
* multiples of 5 print Buzz
* multiples of both 3 and 5 print FizzBuzz
* Return: 0
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i != 100)
		{
			putchar(32);
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
	}
	printf("\n");
	return (0);
}
