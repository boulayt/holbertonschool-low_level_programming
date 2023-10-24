#include "main.h"

/**
 * print_last_digit - prints the last digit of an integer
 * @n: number tested
 *
 * Description: same
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	int last;

	if (n == -2147483648)
	{
		_putchar('8');
		_putchar('8');
	}
	if (n < 0)
		n = n * (-1);

	last = n % 10;

	else
	_putchar('0' + last);

	return (last);
}
