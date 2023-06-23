#include "main.h"


/**
 * _isupper -Checks for uppercases
 * @x - the number to be checked
 * Returns 1 if c is uppercase
 * Returns 0 otherwise
 */

int _isupper(int x)

{
	if (x > 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
