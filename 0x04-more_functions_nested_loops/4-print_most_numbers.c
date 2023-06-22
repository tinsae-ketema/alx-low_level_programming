nclude "main.h"

/**
 * print_most_numbers - prints the numbers since 0 up to 9
 * Description: prints the numbers excluding 2 and 4
 * Retun: The numbers since 0 up to 9
 */

int print_most_numbers(void)
{
	int c = 0;

	for (; c<= '9'; c++)
	{
		if (c == 2 || c == 4
			)
			continue;
	}
	else
	{
			_putchar(c + '0');
	}
	{
	_putchar('\n');
}
