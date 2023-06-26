#include "main.h"

/**
 *swap_int(int *a, int *b) - a function that returns the length of a string
 * @a input to swap
 * @b input to swap
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
