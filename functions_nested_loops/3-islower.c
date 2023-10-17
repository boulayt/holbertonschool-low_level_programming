#include "main.h"

/**
 * _islower - checks if lowercase
 * @c: character tested
 *
 * Description: same
 * Return: 1 if lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
