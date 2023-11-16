#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - print name
 *
 * @name: string
 * @f: pointer to function
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
	else
		return;
}
