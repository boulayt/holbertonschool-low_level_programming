#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdint.h>

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: numbers of elements in the array
 * @size: size in bytes of each element
 *
 * Return: pointer of array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	array = NULL;

	if (nmemb == 0)
		return (NULL);

	if (size == 0)
		return (NULL);

	array = malloc(size * nmemb);

	if (array == NULL)
		return (NULL);

	if (array)
	{
		for (i = 0; i < nmemb; i++)
			array[i] = 0;
	}

	return (array);
}
