#include <stdio.h>
/**
 * main - enty point
 *
 * Description: C program to print the alphabet using putchar
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char first_ll = 97;
	char first_ul = 65;

	while (first_ll <= 122)
	{
		putchar(first_ll);
		first_ll++;
	}
	while (first_ul <= 90)
	{
		putchar(first_ul);
		first_ul++;
	}
	putchar('\n');
	return (0);
}
