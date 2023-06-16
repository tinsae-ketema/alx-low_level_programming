#include <stdi0.h>
/**
 * main - Prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 7)
		{
			putchar(',');
			putcahr(',');
		}
	}
		putchar('\n');
		return (0);
}
