#include "main.h"
/**
* print_triangle - prints a triangle
*
* Description:  prints a triangle
*
* @size: triangle dimensions
*
* Return: void
*/
void print_triangle(int size)
{
	int h, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (h = 0; h <= size; h++)
		{
			for (b = 0; b <= size; b++)
			{
				if ((h + b) <= size)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
