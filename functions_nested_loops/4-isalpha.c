#include "main.h"

/**
 * _isalpha - checks if letter
 * @c: character tested
 *
 * Description: same
 * Return: 1 if letter
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
