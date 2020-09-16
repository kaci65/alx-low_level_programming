#include <stdio.h>
/**
 * main - print sizes of various types
 * Return: 0 if successful
 */

int main(void)
{
	printf("The size of an int: %lu byte(s)\n", sizeof(int));
	printf("The size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("The size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("The size of a char is: %lu byte(s)\n", sizeof(char));
	printf("The size of a float is: %lu byte(s)\n", sizeof(float));

	return (0);
}
