#include "main.h"
/**
 * print_square - enty point
 *
 * Description: prints a square
 *
 * @size: length
 *
 * Return: void
*/
void print_square(int size)
{
	int l;

	if (size > 0)
	{
		for (l = 1; l <= size; l++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
