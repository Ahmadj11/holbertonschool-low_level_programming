#include "main.h"

/**
* closer - closes file
* @fd: file closed
* Return: void
*/

void closer(int fd)
{
	int a;

	a = close(fd);

	if (a == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
	}
}

/**
* argccheck - argc = 3
* @argc: arguments
* Return: void
*/

void argccheck(int argc)
{
	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}
}

/**
* main - copies files
* @argc: arguments
* @argv: command line arguments
* Return: 1
*/


int main(int argc, char *argv[])
{
	int fromfile, tofile, writefile;
	char buffer[1024];

	argccheck(argc);
	fromfile = open(argv[1], O_RDONLY);
	if (fromfile == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
		exit(98);
	tofile = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (tofile == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),
		exit(99);
	while ((writefile = read(fromfile, buffer, 1024)) != 0)
	{
		if (writefile == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			exit(98);
		if (write(tofile, buffer, writefile) != writefile)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),
			exit(99);
	}
	closer(fromfile);
	closer(tofile);
	return (0);
}
