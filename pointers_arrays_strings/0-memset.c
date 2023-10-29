#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _memset - fills memory with a constant byte
 * @s: string we want to copy
 * @b: character we want copied from the string
 * @n: limit of size allowed to copy the string
 *
 * Return: 'b'
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
