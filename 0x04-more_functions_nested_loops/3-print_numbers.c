#include "main.h"

/**
 *print_numbers - prints the numbers, from 0 to 9
 *@prints the numbers, from 0 to 9
 * Returns 1 if c is a digit
 *Returns 0 otherwise
*/

void print_numbers(void)

{

	int x;

	for (x = 0; x <= 9; x++)
	{
		_putchar(x + '0');
		_putchar('\n');
	}
