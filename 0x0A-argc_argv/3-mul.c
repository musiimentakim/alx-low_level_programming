#include <stdio.h>
#include <stdlib.h>

/**
 * main - Function
 * @argc: program argument count
 * @argv: array of pointers to strings (program arguments)
 * Return: multiple for success or any positive integer otherwise
 */

int main(int argc, char **argv)
{
	int i = 1, a = atoi(argv[i]), b = atoi(argv[i + 1]), result;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = a * b;
		printf("%d\n", result);
		return (0);
	}
}
