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
	int lc = 97;

	while (lc <= 122)
	{
	putchar(lc);
	lc++;
	}
	putchar('\n');
	return (0);
}
