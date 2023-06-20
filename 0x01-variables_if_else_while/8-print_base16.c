#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main is the entry point
 * prints all single digit numbers of base 10 starting from 0
 * Return: always zero
 */
int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (m = 97; m <= 102; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
