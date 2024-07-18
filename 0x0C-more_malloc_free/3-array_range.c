#include <stdlib.h>
#include "main.h"

int *array_range(int min, int max) {
	int *array;
	int i, size;
	size = max - min + 1;
	array = malloc(size * sizeof(int));

	if (min > max)
	{
		return (NULL);
	}

		if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}

	return (array);
}
