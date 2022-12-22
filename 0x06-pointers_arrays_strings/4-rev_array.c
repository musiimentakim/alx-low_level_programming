#include "main.h"
/**
 * reverse_array - Function that reverses the content of integer array
 * @a: array pointer
 * @n: number of elements in the array
 * Return: None
 */

void reverse_array(int *a, int n)
{
	int arr_itr, rev;

	for (arr_itr = n - 1; arr_itr > n / 2; arr_itr--)
	{
		rev = a[n - 1 - arr_itr];
		a[n - 1 - arr_itr] = a[arr_itr];
		a[arr_itr] = rev;
	}
}
