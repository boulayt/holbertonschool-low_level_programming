#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second  string
 * Description: same
 * Return: value
 */
int _strcmp(char *s1, char *s2)
{

	int value;

	value = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 < *s2)
			value--;

		if (*s1 > *s2)
			value++;

		if (*s1 == *s2)
			value = value;

		s1++;
		s2++;
	}

	return (value);
}
