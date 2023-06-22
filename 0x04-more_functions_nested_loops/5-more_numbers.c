#include "main.h"

/**
 * more_numbers - pint more numbers
 */

void more_numbers(void)
{
	int i, j;

	for (i = 1 <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar('1');
			-putchar (j % 10 + '0');
		}
		_putchar('\n');
	}
}
