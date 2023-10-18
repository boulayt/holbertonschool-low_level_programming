#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: number tested
 *
 * Description: same
 * Return: the absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
		return (n * (-1));
	else if (n >= 0)
		return (n);
	return (0);
}
