#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main is the entry point
 * Description: to get the number digit of a number
 * Return :always zero
*/

int main(void)
{
	int n;
	int L;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	L = n % 10;
	if (L > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, L);
	}
		else if (L == 0)
		{
			printf("Last digit of %d is %d and is 0", n, L);
		}
			else
			{
				printf("Last digit of %d is %d nd is less than 6 and not 0", n, L);
			}
	return (0);
}
