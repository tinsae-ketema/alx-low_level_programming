#include "3-calc.h"

/**
 * main - check the code for The school students.
 * @argc: the number of ags
 * @argv: argument vector
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int (*cp_func)(int, int), a, b;

	if (argc != 4)
		printf("Error\n"), exit(98);
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	cp_func = get_op_func(argv[2]);
	if (!op_func)
		printf("Error\n"), exit(99);

	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("Error\n"), exit(100);

	printf("%d\n", op_func(a, b));
	return(0);
}
