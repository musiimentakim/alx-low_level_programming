#include <stdio.h>

/**
 * main - Function
 * @argc: program argument count
 * @argv: array of pointers to strings (program arguments)
 * Return: Always 0 success or any positive integer otherwise
 */

int main(int argc, char **argv)
{
	if (argc > 0)
	{
		printf("%s\n", *argv);
	}
	return (0);
}
