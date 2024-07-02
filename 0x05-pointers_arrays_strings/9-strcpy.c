#include "main.h"

/**
 * *_strcpy - copies string pointed to by src to the buffer pointed to by dest.
 *
 *
 * Return: string copied to other buffer
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (start);
}
