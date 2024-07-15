#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns pointer to newly allocated space in memory
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string or NULL
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int a;
	unsigned int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}

	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
	{
		return (NULL);
	}

	for (a = 0; a <= len; a++)
	{
		dup[a] = str[a];
	}

	return (dup);
}
