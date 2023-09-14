#include "main.h"
/**
 * more_numbers - enty point
 *
 * Description: prints 10 times the numbers, from 0 to 14
 *
 * Return: void
*/
void more_numbers(void)
{
	int n;
	int i;
	int c;

	for (i = 1; i <= 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			n = c;

			if (c > 9)
			{
				_putchar(1 + 48);
				n = c % 10;
			}
			_putchar(n + 48);
		}
		_putchar('\n');
	}
}
