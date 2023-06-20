#include <stdio.h>

/**
 * main - Prints the sum of Even Fibonacci numbers
 * lesa than 4000000
 */

int main(void)
{
	int i = 0;
	long j =i, k = 2, sum = k;

	while (k + j < 4000000)
	{
		k += j;
		if (k % 2 == 0)
			sum +k k;
		j = k - j;
		++i;
	}
	printf(%ld\n", sum);
	return (0);
}

