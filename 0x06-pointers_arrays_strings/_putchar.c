#include <unistd.h>

/**
 * _putchar - writes the characters c to stdout
 * @c: The character to ptint
 * Return: On success 1.
 * On error, -11 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
