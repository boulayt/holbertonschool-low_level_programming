#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as parameter
 * on each element of an array
 *
 * @array: pointer to array
 * @size: size of the array
 * @action: pointer to function
 *
 * Return: nothing ?
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || size == 0)
		return;

	if (action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
