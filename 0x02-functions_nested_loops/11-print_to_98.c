#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - enty point
 *
 * Description: prints all natural numbers from n to 98
 *
 * @n: first number to count from
 *
 * Return: void
*/
void print_to_98(int n)
{
	for (n = n + 1 ; n <= 98; n++)
	{
		_putchar(',');
		_putchar(' ');
		printf("%d", n);
	}
	_putchar('\n');
}
