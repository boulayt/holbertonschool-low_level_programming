#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

/**
 * string_nconcat - concatenates 2 strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of s2 bytes that needs to be printed
 *
 * Return: new pointer with strings concatenated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str_cont;
	unsigned int s1L, s2L, str_contL, i, j;

	s1L = 0;
	s2L = 0;
	str_contL = 0;
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

	if (n >= s2L)
		s2L = s2L;

	else if (n < s2L)
		s2L = n;

	str_contL = s1L + s2L + 1;
	str_cont = malloc(str_contL);

	if (str_cont == NULL)
		return (NULL);

	for (i = 0; i < s1L; i++)
		str_cont[i] = s1[i];

	while (j < s2L)
		str_cont[s1L++] = s2[j++];

	str_cont[s1L + s2L] = 0;

	return (str_cont);
}
