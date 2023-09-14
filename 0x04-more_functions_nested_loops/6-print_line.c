#include "main.h"
/**
 * print_line - enty point
 *
 * Description: draws a straight line in the terminal
 *
 * @n: line length
 *
 * Return: Always 0 (success)
*/
void print_line(int n)
{
	int l;

	if (n > 0)
	{
		for (l = n; l <= n; l++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
