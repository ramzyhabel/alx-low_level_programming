#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - enty point
 *
 * Description: C program obtain last digit of a number and its value range
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int n;
	int last_d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_d = n % 10;
	if (last_d > 5)
	{
		prinf("Last digit of %i is %i and is greater than 5", n, last_d);
	}
	else if (last_d < 6)
	{
		prinf("Last digit of %i is %i and is less than 6 and not 0", n, last_d);
	}
	else
	{
		prinf("Last digit of %i is %i and is 0", n, last_d);
	}
	return (0);
}
