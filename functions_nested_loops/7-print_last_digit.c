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
	int last;

	if (n < 0)
		n = n * (-1);
	if (n <= INT_MIN)
		n = n * 100;

	last = n % 10;
	_putchar('0' + last);
	return (last);
}
