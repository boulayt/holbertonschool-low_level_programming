#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates 2 strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: new pointer with strings concatenated
 */

char *str_concat(char *s1, char *s2)
{
	char *str_cont;
	int s1L, s2L, i, j;

	s1L = 0;
	s2L = 0;
	j = 0;
	str_cont = NULL;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[s1L] != '\0')
		s1L++;

	while (s2[s2L] != '\0')
		s2L++;

	str_cont = malloc((s1L + s2L) + 1);

	if (str_cont == NULL)
		return (NULL);

	for (i = 0; i < s1L; i++)
		str_cont[i] = s1[i];

	while (j < s2L)
		str_cont[s1L++] = s2[j++];

	return (str_cont);
}
