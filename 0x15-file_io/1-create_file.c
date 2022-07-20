#include "main.h"

/**
 * create_file - function to create files
 * @filename: file being referenced
 * @text_content: content of file
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int fl;
	ssize_t text_size, write_size;

	if (!filename)
		return (-1);

	fl = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fl == -1)
		return (-1);

	if (!text_content)
	{
		close(fl);
		return (1);
	}

	for (text_size = 0; text_content[text_size]; text_size++)
	{}

	write_size = write(fl, text_content, text_size);

	if (write_size != text_size)
		return (-1);

	return (1);
}
