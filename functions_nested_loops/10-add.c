#include "main.h"

/**
 * add - add two integers
 * @a: first value
 * @b: second value
 *
 * Description: same
 * Return: result
 */
int add(int a, int b)
{
	int r, x;

	r = a + b;

	for (x = 1000000000; x >= 10; x = x / 10)
	{
		if ((r > 0) && (r / x) > 0)
			_putchar('0' + (r / x));
		if ((r < 0) && (r / x) <= (-1))
		{
			_putchar('-');
			_putchar('0' + (-1) * (r / x));
		}
	}
	return((r % 10));
}
