#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copy a string and allocate memory for it
 *
 * @str: input string
 *
 * Return: pointer to the new string
 */

char *_strdup(char *str)
{
	char *str_bis;
	int i, j;

	j = 0;
	str_bis = NULL;

	if (str == NULL)
		return (NULL);

	while (str[j])
		j++;

	str_bis = malloc(j);

	if (str_bis == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		str_bis[i] = str[i];

	return (str_bis);
}
