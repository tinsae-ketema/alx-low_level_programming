#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: chat type string
 * @src: char type string
 * Desciption: copy the string poined to by pointer 'src' to
 * the baffer pointed to by 'dast'
 * Return: pointer to 'dest'
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	}
	while (src[i] != '\0');
return (dest);
}	

