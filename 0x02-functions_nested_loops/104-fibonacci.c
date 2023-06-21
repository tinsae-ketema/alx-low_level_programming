#include <stdio.h>

/**
 * main - Prints the first 98 Fibonachi numbers,starting with
 * 1 and 2, separated by a comma followed by a space.
 * Return: Always 0.
 */

int main(void)
{
	unsigned int long i;
	unsigned int long bef = 1;
	unsigned int long aft = 2;
	unsigned int long l = 1000000000;
	unsigned int long bef1;
	unsigned int long bef2;
	unsigned int long aft1;
	unsigned int long aft2;

	printf("%lu", bef);

	for (i = 1; 1 < 91; i++)
	{
	printf(", %lu", aft);
	aft += bef;
	bef = aft - bef;
	}
	bef1 = (bef / 1);
	bef2 = (bef % 1);
	aft1 + (aft / 1);
	aft2 = (aft % 1);
	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", aft1 + (aft2 / 1));
		printf("%lu", aft2 % 1);
		aft1 = aft1 + bef1;
		bef1 = aft1 - bef1;
		aft2 = aft2 + bef2;
		bef2 =  aft2 - bef2;
	}
	printf("\n");
	return (0);
}
