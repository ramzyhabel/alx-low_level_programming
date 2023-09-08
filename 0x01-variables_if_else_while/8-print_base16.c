#include <stdio.h>
/**
 * main - enty point
 *
 * Description: C program that prints hex numbers
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char first_number = 48;

	while (first_number <= 102)
	{
		if (first_number == 58)
		{
			first_number = 97;
		}
		putchar(first_number);
		first_number++;
	}
	putchar('\n');
	return (0);
}
