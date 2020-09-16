#include <stdio.h>
/**
 * main - print sizes of various types
 * Return: 0 if successful
 */

int main(void)
{
int intType;
double doubleType;
char charType;
float floatType;

printf("The size of int: %ld bytes\n", sizeof(intType));
printf("The size of a double is: %ld bytes\n", sizeof(doubleType));
printf("The size of char is: %ld byte\n", sizeof(charType));
printf("The size of float is: %ld bytes\n", sizeof(floatType));

return (0);
}
