#include "main.h"
/**
 * main - main function
 * @argc: arg 1
 * @argv: arg 2
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int x;
	int y;

	if (argc < 2)
	{
		printf("%d\n", sum);
		return (0);
	}
	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] < '0' || argv[x][y] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}

