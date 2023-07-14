#include "main.h"

/**
 * *_memset - fills memory with a consstant byte.
 * @s: pointer to put the constant
 * @b: contant
 * @n: max bytes to use
 * Return:s
 */

char *_memset(char *s, char b, unsigned int n)
{
	chr *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}
/**
 * *calloc - allocates memory for an array,using malloc
 * @nmemb: array length
 * @size: size of each element
 * @rreturn: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
		return (NULL);
	_memset(m, 0, sizeof(int) * nmemb);

	return (m);
}
