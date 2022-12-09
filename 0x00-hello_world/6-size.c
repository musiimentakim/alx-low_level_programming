#include <stdio.h>
/**
 * main - entrypoint
 * Return: Always 0 (success)
 */

int main(void)
{
	printf("Size of a char: %zu byte(s)", sizeof(char));
	printf("Size of an int: %zu bytes(s)", sizeof(int));
	printf("Size of a long int: %zu bytes(s)", sizeof(long int));
	printf("Size of a long long int: %zu bytes(s)", sizeof(long long int));
	printf("Size of a float: %zu bytes(s)", sizeof(float));
	return (0);
}
