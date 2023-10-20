#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 9
 *
 * Description: exclude 2 and 4
 * Return: nothing since void
 */
void more_numbers(void)
{
	char i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 && i != 52)
		_putchar(i);
	}
	_putchar('\n');
}
