#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog - function that creates a new dog
 *
 * @name: input name
 * @age: input age
 * @owner: input owner
 *
 * Return: nothing
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *newDog;

	newDog = malloc(sizeof(dog_t));	

	if (newDog == NULL)
		return (NULL);

	newDog->name = strdup(name);
	if (name == NULL)
	{
		free(newDog->name);
		return (NULL);
	}

	newDog->owner = strdup(owner);
	if (owner == NULL)
	{
		free(newDog->name);
		free(newDog->owner);
		free(newDog);
		return (NULL);
	}

	newDog->age = age;

	return (newDog);
}
