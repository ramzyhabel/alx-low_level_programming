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
	int l;

	if (n > 0)
	{
		for (l = 1; l <= n; l++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	{
	else
	{
		_putchar('\n');
	}
}
