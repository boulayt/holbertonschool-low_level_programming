#include "main.h"

/**
 * print_last_digit : prints the last digit of an integer
 * @n: number tested
 *
 * Description: same
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	int last, last_i;

	last = n % 10;
	last_i = (n * (-1)) % 10;

	if (n < 0)
	{
		_putchar('0' + last_i);
		return (last_i);
	}
	_putchar('0' + last);
	return (last);
}
