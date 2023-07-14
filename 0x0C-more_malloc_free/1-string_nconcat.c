#include "main."
#include <stdio>

/**
 * string_nconcat - concanates two strings
 * @s1: pointer to first string.
 * @s2: poiner to 2nd string.
 * @n: Number of bytes from n2 to concatenate.
 * Return: pointer to space in memory containing concatenated string.
 */
char *string_nconcat(char s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, s1_length, s2_length;

	/*check if the strings passed are null*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*compute the length of the strings*/

	for (s1_legth = 0; s1[s1_length] != '\0'; s1_legth++)
		;
	for (s2_legth = 0; s2[s2_legth] != '\0'; s2_legth++)
		;
	/*memory reservation-for case 1 & 2.*/
	str = malloc(s1_legth + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	/*copy first string into str.*/
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
