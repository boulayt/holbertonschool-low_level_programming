#include "main.h"

/**
 * _strlen_recursion - check the code
 *
 * @s: input string
 * Return: the lenght of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	else
		return (_strlen_recursion(s + 1) + 1);
}
