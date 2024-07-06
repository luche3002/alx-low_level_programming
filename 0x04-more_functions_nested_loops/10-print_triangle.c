#include "main.h"

/**
 * print_trinagle - prints trinagle in the terminal
 * @size: the size of the triangle
 *
 * Return: tringle in the terminal
 */

void print_triangle(int size)
{
	int x;
	int y;
	int z;

	if (size <= 0)
	{
		_putchar ('\n');
	}
	for (x = 0; x < size; x++)
	{
		for (y = size - x; y > 0; y--)
		{
			_putchar (' ');
		}
		for (z = 0; z < x; z++)
		{
			_putchar ('#');
		}
		_putchar ('\n');
	}
}
