#include "main.h"

/**
 * print_to_98 - print for n to 98
 * @n: first value
 *
 * Description: same
 */
void print_to_98(int n)
{
	if (n == 98)
		_putchar(n);
	if (n < 98)
	{
		do 
		{
			_putchar(n);
			_putchar(' ');
			_putchar(',');
		} while (n < 98);
	}
	if (n > 98)
	{
		do
		{
			_putchar(n);
			_putchar(' ');
			_putchar(',');
		} while (n > 98);
	}
	_putchar('\n');
}
