#include "main.h"

/**
 * reverse_array - reverses the elements of the array
 * @a: array to to be reversed
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n / 2; x++)
	{
		y = a[x];
		a[x] = a[n - 1 - x];
		a[n - 1 - x] = y;
	}
}
