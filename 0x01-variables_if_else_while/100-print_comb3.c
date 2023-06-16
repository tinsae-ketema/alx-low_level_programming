#include <stdio.h>
/**
 * main - Prints all possible different combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m;

	for (n = '0'; n < '9'; n++)
	{
		for (m = n + 1; m <= '9'; m++)
		{
			if (m != n)
			{
				putchar(n);
				putchar(m);
				if (n == '8' && m == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
