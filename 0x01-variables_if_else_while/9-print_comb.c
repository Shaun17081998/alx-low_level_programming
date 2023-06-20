#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main is the entry point
 * prints all possible combinations of single-digit numbers
 * Return: always zero
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar ('\n');
		return (0);
}
