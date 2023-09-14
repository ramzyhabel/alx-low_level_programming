#include "main.h"
/**
 * print_diagonal - enty point
 *
 * Description: draws a diagonal line on the terminal
 *
 * @n: number of times the character \ should be printed
 *
 * Return: void
*/
void print_diagonal(int n)
{
	int s, p;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (p = 0; p < n; p++)
		{
			for (s = 0; s < p; s++)
			{
				_putchar(' ');
				_putchar(92);
			}
			if (p == (n - 1))
			{
			continue;
			_putchar('\n');
			}
		}
		_putchar('\n');
	}
}
