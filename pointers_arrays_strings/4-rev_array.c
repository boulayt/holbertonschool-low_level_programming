#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * reverse_array - reverses an array
 * @a: array
 * @n: size of array
 * Description: same
 * Return: value
 */
void reverse_array(int *a, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && dest[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
