#include <stdio.h>
#include <stdio.h>
/**
 * main - Entrypoint
 *
 * Return: Always 0
 */

int main(void)
{
	int a = 0;
	int sum = 0;

	while (a < 1024)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			sum += a;
		}
		a++;
	}
	printf("%i\n", sum);
	return (0);
}
