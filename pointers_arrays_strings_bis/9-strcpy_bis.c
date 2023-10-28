#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * *_strcpy - copies a string
 * @dest: adress of return
 * @src: string
 * Description: same
 * Return: value
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	j = strlen(src);

	while (*src != '\0')
	{
		for (i = 0; i < j; i++)
		{
			char temp = *src;

			*src = *dest;
			*dest = temp;
		}
	}
	printf ("\\o\n");

	return (dest);
}
