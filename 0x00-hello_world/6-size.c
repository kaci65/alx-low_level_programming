#include <stdio.h>
/**
 * main - print sizes of various types
 * Return: 0 if successful
 */

int main(void)
{
printf("The size of int: %ld bytes\n", sizeof(int));
printf("The size of a double is: %ld bytes\n", sizeof(double));
printf("The size of char is: %ld byte\n", sizeof(char));
printf("The size of float is: %ld bytes\n", sizeof(float));
printf("The size of long int is: %ld bytes\n", sizeof(long int));
printf("The size of long long int is: %ld bytes\n", sizeof(long long int));

return (0);
}
