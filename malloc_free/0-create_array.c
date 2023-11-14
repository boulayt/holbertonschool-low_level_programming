#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array of chars
 *
 * @size: size of memory we need to allow
 * @c: input char
 *
 * Return: pointer to the array, NULL if it fails
 */
 
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;
	
	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);
	
	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;
		
	return(array);
}
