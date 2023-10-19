#include "main.h"

/**
 * _isdigit - checks if digit
 * @c: character tested
 *
 * Description: same
 * Return: 1 if digit
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
