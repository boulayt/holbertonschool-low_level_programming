#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory
 *
 * @b: input
 *
 * Return: allocated space
 */

void *malloc_checked(unsigned int b)
{
	int *memory;

	memory = malloc(b);

	if (memory == NULL)
		exit(98);

	return (memory);
}
