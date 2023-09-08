#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - enty point
 *
 * Description: C program to print if a variable is +ve or -ve
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%li is positive\n", n);
	};
	else if (n < 0)
	{
		printf("%lu is negative\n", n);
	};
	else
	{
		printf("%i is zero\n", n);
	};
	return (0);
}
