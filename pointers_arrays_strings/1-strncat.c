#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strncat - concatenates two strings
 * @dest: adress of return
 * @src: string
 * @n: number of bytes returned from src
 * Description: same
 * Return: value
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, destL;

	i = 0;
	destL = 0;

	while (dest[destL] != '\0')
		destL++;

	while (src[i] != '\0' && i < n)
	{
		dest[destL++] = src[i++];
	}
	return (dest);
}
