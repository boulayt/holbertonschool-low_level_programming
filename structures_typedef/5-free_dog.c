#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees data
 *
 * @d: pointer of data
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
