#include "main.h"
/**
 * times_table - enty point
 *
 * Description:  prints the 9 times table, starting with 0
 *
 * Return: void
*/
void times_table(void)
{
	int i;
	int n;
	int r;

	for (i = 0; i <= 10; i++)
	{
		_putchar(48);
		for (n = 1; n <= 9; n++)
		{
			_putchar(',');
			_putchar(' ');

			r = i * n;

			if (r <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((r / 10) + 48);
			}
			_putchar((r % 10) + 48);
		}
		_putchar('\n');
	}
}
