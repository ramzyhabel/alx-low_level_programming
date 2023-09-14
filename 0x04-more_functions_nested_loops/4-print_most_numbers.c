#include "main.h"
/**
 * print_most_numbers - enty point
 *
 * Description: prints numbers expect 2 & 4
 *
 * Return: Always 0 (success)
*/
void print_most_numbers(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		if (ch == '2' || ch == '4')
		{
			ch++;
		}
		else
		{
		_putchar(ch);
		}
	}
	_putchar('\n');
}
