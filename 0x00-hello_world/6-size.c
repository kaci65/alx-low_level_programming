#include <stdio.h>
/**
 * main - print sizes of various types
 * Return: 0 if successful
 */

int main(void)
{
	printf("The size of an int: %lu\n", sizeof(int));
	printf("The size of a long int: %lu\n", sizeof(long int));
	printf("The size of a long long int: %lu\n", sizeof(long long int));
	printf("The size of a double is: %lu\n", sizeof(double));
	printf("The size of a char is: %lu\n", sizeof(char));
	printf("The size of a float is: %lu\n", sizeof(float));

	return (0);
}
