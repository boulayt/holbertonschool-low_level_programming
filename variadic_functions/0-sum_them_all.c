#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 *
 * @n: number of arguments to sum
 *
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result;
	va_list ap;

	result = 0;

	if ( n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
		result = result + va_arg (ap, int);

	va_end(ap);

	return (result);

}
