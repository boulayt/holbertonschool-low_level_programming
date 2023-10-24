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
        int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	return (dest);
}
