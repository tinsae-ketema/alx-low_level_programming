#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2.
 * separated by coma followed by a space.
 * Return: Always 0.
 */

int main(void)
{
	int fib1 = 1, fib2 = 2, sum = 0;

	while (fib2 <= 4000000)
	{
	if (fib2 % 2 == 0)
	{
	sum += fib2;
	}
int next = fib1 + fib2;
fib1 = fib2;
fib2 = next;
	}
	printf("%d\n", sum);
	return (0);
}

