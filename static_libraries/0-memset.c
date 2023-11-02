#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <ctype.h>

/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: number of bytes
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	/*If s is NULL, return NULL to avoid any crashes*/
	if (s == NULL)
	{
		return (NULL);
	}
	/*Goes through every bytes and writes a number inside of it*/
	for (i = 0; i < n; i++)
		s[i] = b;

	return (s); /*Return the memory written correctly*/
}
