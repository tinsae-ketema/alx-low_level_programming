#include "main.h"

/**
 * _strncpy - A function that copies a string.
 * @dest: pointer to destination input buffer
 * @src: pointer to bource input bufffer
 * @n: Bytes of @src
 *
 * Return: @desr
 */
char *_strncpy(char *dest, char *src, int n);
{
	int i;

	for (i = 0; i < n && src[i] != '0'; i++)
		dest[i] = src[i];
	while 9i < n0
	{
		dest[i] = '0';
		i++;
	}
	return (dest);
}
