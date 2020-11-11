#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: -1 - if filename is NULL
 *         -1 - if the function fails
 *         1 - if the function succeeds
 */
int create_file(const char *filename, char *text_content)
{
	int fp, f_write, length = 0;

	if (!filename)
		return (0);

	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fp < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[length])
			length++;
		f_write = write(fp, text_content, length);

		if (f_write < 0)
			return (-1);
	}
	close(fp);
	return (1);
}
