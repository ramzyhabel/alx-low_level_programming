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
	int ch;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (ch = '0'; ch <= '14'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
