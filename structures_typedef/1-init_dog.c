#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize dog structure
 *
 * @d: pointer of type dog
 * @name: input name
 * @age: input age
 * @owner: input owner
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
