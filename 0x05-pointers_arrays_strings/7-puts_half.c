#include "main.h"

/**
 * puts_half - print second half of a string
 * @str: char stray string type
 * Description: if odd number of chars, print (length - 1) / 2
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; st[i] != '\0'; i++)
		;
	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\0');
}
