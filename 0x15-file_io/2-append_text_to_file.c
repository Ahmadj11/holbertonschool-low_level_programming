#include "main.h"

/**
 * append_text_to_file - appends text to file
 * @text_content: added to the end of file
 * @filename: name of file
 * Return: 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int wd;
	ssize_t text_size, write_size;

	if (!filename)
		return (-1);

	wd = open(filename, O_APPEND | O_WRONLY);
	if (!wd)
		return (-1);

	if (!text_content)
	{
		close(wd);
		return (1);
	}

	for (text_size = 0; text_content[text_size]; text_size++)
	{}

	write_size = write(wd, text_content, text_size);
	close(wd);

	if (text_size != write_size)
		return (-1);
	return (1);
}
