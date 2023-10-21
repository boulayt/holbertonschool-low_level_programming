#include "main.h"

/**
 * fizz_buzz - prints n times char unless it multiples by 3 or 5
 *
 * Description: if (n % 3) = 0 -> prints 'Fizz'
 * if (n % 5) = 0 -> prints 'Buzz'
 * if both are true -> prints 'FizzBuzz'
 * else -> prints n
 * Return: nothing since void
 */
void fizz_buzz(void)
{
	char i;

	for (i = 1; i < 100; i++)
	{
		if (((i % 3) == 0) && ((i % 5) != 0))
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
		}
		if (((i % 5) == 0) && ((i % 3) != 0))
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		if (((i % 3) == 0) && ((i % 5) == 0))
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else if (i < 10)
		{
			_putchar(i);
			i++;
		}
		else if (i < 100 && i > 10)
		{
			_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
			i++;
		}
		_putchar(' ');
		}
	_putchar('\n');
			
}
	
