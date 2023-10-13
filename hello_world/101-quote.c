#include <stdio.h>
#include <unistd.h>

/**
 * main - prints and that piece of art is useful" - Dora Korpar, 2015-10-19
 *
 * Return: 1 if printf works
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19",59);
	return (1);
}
