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

	while (*src != '\0' && *dest != '\0')
		*src++ = *dest++;

	return (dest);
}
