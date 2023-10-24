#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * rev_string - print a string in reverse
 * @s: input
 * Description: same
 */
void rev_string(char *s)
{
	int i, j;

	j = strlen(s) - 1;

	for (i = j; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
