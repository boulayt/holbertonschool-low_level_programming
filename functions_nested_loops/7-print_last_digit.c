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
	if (n != 0)
		return (n % 10);
	else
		return (0);
}
