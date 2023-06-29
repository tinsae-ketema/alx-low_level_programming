#include "main.h"
#include <stdio.h>

/**
 * islower - determines whether ascii is lowercse
 * @c: character
 * Return: 1 if true, 0 if false
 */

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}
int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n; . !?\"()()";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}



