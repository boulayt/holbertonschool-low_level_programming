#include "main.h"

/**
 * _sqrt_recursion_helper - help to find sqrt
 * @guess : guest for the sqrt
 * @n: int to be tested
 *
 * Return: n after it's guessed
 */
int _sqrt_recursion_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);

	if (guess * guess > n)
		return (-1);
	else
		return (_sqrt_recursion_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - find natural
 * @n: int to be tested
 *
 * Return: n if he's natural
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	else
		return (_sqrt_recursion_helper(n, 0));
}
