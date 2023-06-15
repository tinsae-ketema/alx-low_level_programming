#include <stdio.h>
/**
 * main - A program that prints the size of a various computer types
 * Retun 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
pritnf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(c));
printf("Size of a long int:%lu bytes(s)\n", (unsigned long)sizeof(d));
printf("Size of float: %lu bytes(s)\n", (unsigned long)sizeof(f));
return (0);
}

