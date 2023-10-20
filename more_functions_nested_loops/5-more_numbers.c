#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14
 *
 * Description: same
 * Return: nothing since void
 */
void more_numbers(void)
{

	int i = 0;

	while (i < 15)
	{
		if (i > 10)
			_putchar('0' + (i / 10));
		_putchar('0' + (i % 10));
		i++;
	}
	_putchar('\n');

}
