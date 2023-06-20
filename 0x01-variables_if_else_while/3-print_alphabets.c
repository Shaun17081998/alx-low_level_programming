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
	int UC = 65;

	while (lc <= 122)
	{
		putchar(lc);
		lc++;
	}
	while (UC <= 90)
	{
		putchar(UC);
		UC++;
	}
	putchar('\n');
	return (0);
}
