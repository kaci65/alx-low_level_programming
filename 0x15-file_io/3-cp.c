#include "holberton.h"
#define BUFFSIZE 1024

/**
 * main - prints it name followed by a new line
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	filecopy(argv[1], argv[2]);
	return (0);
}

/**
 * filecopy - copies content from file_from to file_to
 * @file_from: source file containing content
 * @file_to: destination file where content is being copied to
 * Return: Nothing
 */
void filecopy(const char *file_from, const char *file_to)
{
	int fp_from, fp_to, f_read, f_write, close_f1, close_f2;
	char buff[BUFFSIZE];

	fp_from = open(file_from, O_RDONLY);
	fp_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((f_read = read(fp_from, buff, BUFFSIZE)) > 0)
	{
		f_write = write(fp_to, buff, f_read);
		if (f_write != f_read || fp_to < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
			exit(99);
		}
	}
	if (f_read < 0 || fp_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	close_f1 = close(fp_from);
	close_f2 = close(fp_to);
	if ((close_f1 < 0) && (close_f2 < 0))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fp_from);
		exit(100);
	}
}
