#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: string source
 * @n: --
 * Description: same
 * Return: value
 */
char *_strncpy(char *dest, char *src, int n)
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
