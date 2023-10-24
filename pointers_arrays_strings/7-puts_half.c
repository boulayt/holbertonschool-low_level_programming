#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * puts_half - print every other characters of a string
 * @str: input
 * Description: same
 */
void puts_half(char *str)
{
	int i, n, m;

	i = 0;

	n = strlen(str);

	m = n / 2;

	while ((str[i]) != '\0')
	{
		if (n <= m)
			_putchar(str[i]);
		i++;
		n--;
	}
	_putchar('\n');
}
