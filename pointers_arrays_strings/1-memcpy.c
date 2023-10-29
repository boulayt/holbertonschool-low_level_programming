#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _memcpy - copies memory area
 * @dest: string we want to return
 * @src: input string
 * @n: limit of size allowed to copy the string
 *
 * Return: 'dest'
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
		src[i] = dest[i];

	return (dest);
}
