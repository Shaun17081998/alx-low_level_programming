#include "main.h"

/**
 *_strlen(char *s) - a function that returns the length of a string
 * @a input to swap
 * @b input to swap
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
