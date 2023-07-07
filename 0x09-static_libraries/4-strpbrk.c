#include "main.h"

/**
 * _strpbrk - search a string for any sort of bytes.
 * @s: string
 * @accept: string to mtch
 * Return: poiner to the byte in s or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int itr, jtr;
	char *p;

	itr = 0;
	while (s[itr] != '\0')
	{
		jtr = 0;
		while (accept[jtr] != '\0')
		{
			if (accept[jtr] == s[itr])
			{
				p = &s[itr];
				return (p);
			}
			jtr++;
		}
		itr++;
	}
	return (0);
}
