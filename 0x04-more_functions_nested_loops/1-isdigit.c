#include "main.h"

/**
 * _isdigit - Check if a character is a digit
 * @c: The number to be checked
 * Return: 1 for a ccharacter that will be a digit or 0 for any else
 */

int _insdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
