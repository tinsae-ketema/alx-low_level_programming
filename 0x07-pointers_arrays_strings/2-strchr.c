#include "main.h"

/**
 * _strchr - fills memory with aa constant byte
 * @s: ppointer to put the constant
 * @c: constant
 * Return: pointer s
 */
char *_strchr(char *s, char c)
{
	int itr;

	for (itr = 0; s[itr] >= '\0'; itr++)
	{
		if (s[itr] == c)
		{
			return (s + itr);
		}
	}
	return ('\0');
}
