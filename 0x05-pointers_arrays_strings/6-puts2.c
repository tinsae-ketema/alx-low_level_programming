#include "main.h"

/**
 * puts2 - prints every charcter of a string
 * @str: string parameter input
 * @return: Nothing
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}

