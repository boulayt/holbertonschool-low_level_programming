#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strcat - concatenates two strings
 * @dest: adress of return
 * @src: string
 * Description: same
 * Return: value
 */
char *_strcat(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		if ((i - 1) > 0)
			dest[i] = src[i] + src[i - 1];
		i++;
	}
	return (dest);
}
