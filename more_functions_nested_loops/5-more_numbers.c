#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14
 *
 * Description: same
 * Return: nothing since void
 */
void more_numbers(void)
{

	int a, i;

	for (a = 0; a <= 10; a++)
	{
		for (i = 0; i < 15; i++)
	{
		if (i >= 10)
			_putchar('0' + (i / 10));
		_putchar('0' + (i % 10));
	}
	_putchar('\n');
	}
}
