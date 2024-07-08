#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: string to be checked
 * @accept: string with characters
 *
 * Return: number of bytes in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x;
	unsigned int y;
	unsigned int count;
	unsigned int match;

	for (x = 0; s[x] != '\0'; x++)
	{
		match = 0;
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				match = 1;
				break;
			}
		}
		if (match == 0)
		{
			return (count);
		}
		count++;
	}
	return (count);
}
