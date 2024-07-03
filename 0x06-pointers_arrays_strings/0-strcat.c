#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string that is the destination
 * @src: string that is the source
 *
 * Return - pointer to the dest string
 */

char *_strcat(char *dest, char *src)
{
	int x = 0, y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0')
	{
		dest[x] = src [y];
		x++;
		y++;
	}
	dest[x] = '\0';

	return dest;
}
