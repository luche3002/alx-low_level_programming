#include "main.h"

/**
 * _strncat - concancates two strings
 * @dest: string of the destination
 * @src: string of the source
 * @n: number of bytes used from src
 *
 * Return: pointer to the dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';

	return dest;
}
