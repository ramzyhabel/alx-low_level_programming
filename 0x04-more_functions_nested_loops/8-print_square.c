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
	int l, p;

	if (size > 0)
	{
		for (l = 0; l < size; l++)
		{
			for (p = 0; p < size; p++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
