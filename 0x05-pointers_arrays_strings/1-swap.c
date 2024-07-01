#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: value of first integer to be swaped
 * @b: value of second integer to be swaped
 *
 * Return: value of swaped integers
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
