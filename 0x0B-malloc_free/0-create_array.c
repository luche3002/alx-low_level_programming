#include <stdlib.h>
#include "main.h"

/*
 * create_array - creates an array of chars, and initializes it with a char
 * @size: the size of the array
 * @c: the char to initialize the array
 *
 * Return: the array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int a;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < size; a++)
	{
		array[a] = c;
	}

	return (array);
}
