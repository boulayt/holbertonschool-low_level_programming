#include "main.h"

/**
 * swap_int - swap values of 2 int
 * @a: input
 * @b: second input
 * Description: same
 */
void swap_int(int *a, int *b)
{
	int pa = *a;
	*a = *b;
	*b = pa;
}
