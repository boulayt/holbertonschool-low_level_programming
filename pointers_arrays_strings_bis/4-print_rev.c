#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_rev - print a string in reverse
 * @s: input
 * Description: same
 */
void print_rev(char *s)
{
	int i, j;

	j = strlen(s) - 1;

	for (i = j; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
