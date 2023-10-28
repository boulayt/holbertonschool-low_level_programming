#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * puts2 - print every other characters of a string
 * @str: input
 * Description: same
 */
void puts2(char *str)
{
	int i;

	i = 0;

	while ((str[i]) != '\0')
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
