#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdint.h>

/**
 * array_range - creates an array of integers
 *
 * @min: input value
 * @max: 2nd input value
 *
 * Return: pointer of array
 */

int *array_range(int min, int max)
{
	int *array;
	int i;

	array = NULL;

	if (min > max)
		return (NULL);

	array = malloc((max - min + 1) * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
		array[i] = min + i;

	return (array);
}
