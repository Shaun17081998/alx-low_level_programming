#include "main.h"

/**
 *-isdigit.c - Check if a character is a digit
 *@x is the number to be checked
 * Returns 1 if c is a digit
 *Returns 0 otherwise
*/

int _isdigit(int x)

{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
