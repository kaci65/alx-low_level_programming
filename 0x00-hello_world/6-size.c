#include <stdio.h>
/**
 * main - print sizes of various types
 * Return: 0 if successful
 */

int main(void)
{
int i;
double d;
char c;
float f;

printf("The size of int: %lu.\n", (unsigned long)sizeof(i));
printf("The size of a double is: %lu.\n", (unsigned long)sizeof(d));
printf("The size of char is: %lu.\n", (unsigned long)sizeof(c));
printf("The size of float is: %lu.\n", (unsigned long)sizeof(f));

return (0);
}
