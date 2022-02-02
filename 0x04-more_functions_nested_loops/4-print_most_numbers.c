#include"main.c"
/**
 * print_most_numbers - prints 0-9
 *
 * Return 0
 */
void print_most_numbers(void)
{
	int count;
		for (count = '0'; count <= '9'; count++)
		{
			if (count != '4' && count != '2')
			{
_putchar(count);
			}
		}
_putchar('\n');
}
