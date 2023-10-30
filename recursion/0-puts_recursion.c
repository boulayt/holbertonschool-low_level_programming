#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _puts_recursion - check the code
 *
 * @s: input string
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	int i;

	i = 0;

	if (s[i] != '\0') 
	{
		putchar(s[i]);
		_puts_recursion(s + 1);
	}
}
