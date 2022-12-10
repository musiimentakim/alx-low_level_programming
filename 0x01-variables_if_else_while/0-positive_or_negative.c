#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 *main - Entrypoint
 *Description: 'integr status checker'
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n == 0)
	{
		printf("%d is zere\n", n);
	}
	else
	{
		if (n > 0)
		{
			printf("%d is positive\n", n);
		}
		else
		{
			printf("%d is negative\n", n);
		}
	}
	return (0);
}
