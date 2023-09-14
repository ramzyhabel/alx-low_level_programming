#include "main.h"
/**
 * positive_or_negative - chech number +ve or -ve
 * Description: C program to print if a variable is +ve or -ve
 * @n: number to be checked
 * Return: Always 0 (success)
*/
int positive_or_negative(int n)
{

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	else
	{
		printf("%i is zero\n", n);
	}
	return (0);
}
/**
 * main - main function
 * Description: C program to print if a variable is +ve or -ve
 * Return: Always 0 (success)
*/
int main(void)
{
	int i;

	i = 0;

	positive_or_negative(i);

	return (0);
}
