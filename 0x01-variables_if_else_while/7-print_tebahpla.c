#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main is the entry point
 * Description: prints the alphabet in lowercase, followed by a new line.
 * Return: always zero
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
