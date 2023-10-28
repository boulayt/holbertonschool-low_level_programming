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
	int i, destL;

	i = 0;
	destL = 0;

	while (dest[destL] != '\0')
		destL++;

	while (src[i] != '\0')
	{
		dest[destL++] = src[i++];
	}
	return (dest);
}
