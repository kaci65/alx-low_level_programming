#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign random number to n
 * Return: 0 if successful
 */
int main(void)
{
int n;
int num;

srand(time(0));
n = rand() - RAND_MAX / 2;

num = n % 10;
if (n > 5)
{
	printf("Last digit of %d is %d and is greaterthan 5\n", n, num);
}
else if (n == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, num);
}
else if (n < 6)
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, num);
}

return (0);
}
