#include "main.h"
/**
 * print_chessboard - prnits the chessboard
 * @a: 2D array representing the chessboard
 *
 * Return: chessboard
 */

void print_chessboard(char (*a)[8])
{
	int x;
	int y;

	for(x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			putchar (a[x][y]);
		}
		putchar ('\n');
	}
}
