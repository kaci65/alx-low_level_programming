#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to add at the end of the file
 * Return: -1 - if filename is NULL
 *         -1 - if the function fails
 *         1 - if the function succeeds
 *         1 - if the file exists
 *         -1 - if file does not exist or you do not have the
 *         required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, f_write, length = 0;

	if (!filename)
		return (-1);

	fp = open(filename, O_RDWR | O_APPEND);
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
