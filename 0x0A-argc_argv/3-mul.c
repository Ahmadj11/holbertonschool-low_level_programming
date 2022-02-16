#include "main.h"
/**
 * main - main function
 * @argc: arg 1
 * @argv: arg 2
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x = 0;

	if (argc == 3)
	{
		x = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", x);
		return (0);
	}
	else
	{
		pritf("Error\n");
		return (1);
	}
}
