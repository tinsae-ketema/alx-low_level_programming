#include <stdio.h>

/**
 * main - Prints the sum of Even Fibonacci numbers
 * less thann 4000000.
 * Return: Nothing!
 */

int main(void)

{
	int i = 0;
	int j = i, k = 2, sum = k;

	while (k + j < 400000)
	{
		k += j;
		if (k % 2 == 0)
			sum += k;
		j = k - j;
		++i;
	}
	printf("%d\n", sum);
	return (0);
}
