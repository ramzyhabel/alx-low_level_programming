#include <stdio.h>
/**
 * main - enty point
 *
 * Description: C program prints all possible combinations of a number
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		putchar(',');
		putchar(32);
		n++;
	}
	putchar('\n');
	return (0);
}
