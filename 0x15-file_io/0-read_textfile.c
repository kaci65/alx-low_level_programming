#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to be opened and read
 * @letters: number of letters to be read and printed
 * Return: 0 - if filename is NULL
 *         0 - if write fails or does not write expected amount of bytes
 *         Otherwise - actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fp, f_print, f_read;
	char *characters;

	characters = malloc(sizeof(char) * letters);
	if (!filename && !characters)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp < 0)
	{
		free(characters);
		return (0);
	}

	f_read = read(fp, characters, letters);
	if (f_read < 0)
	{
		free(characters);
		return (0);
	}

	f_print = write(STDOUT_FILENO, characters, f_read);
	if (f_print < 0)
	{
		free(characters);
		return (0);
	}

	free(characters);
	close(fp);
	return (f_print);
}
