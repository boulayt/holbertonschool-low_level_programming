#include "main.h"

/**
 * prime_number_helper - help to find prime number
 * @guess : guest for the prime
 * @n: int to be tested
 *
 * Return: n after it's guessed
 */
int prime_number_helper(int n, int guess)
{
	if (n <= 1)
		return (0);

	if (guess == 1)
		return (1);

	if (n % guess == 0)
		return (0);

	return (prime_number_helper(n, guess - 1));
}

/**
 * is_prime_number - find prime
 * @n: int to be tested
 *
 * Return: n if he's prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (prime_number_helper(n, n - 1));
}
