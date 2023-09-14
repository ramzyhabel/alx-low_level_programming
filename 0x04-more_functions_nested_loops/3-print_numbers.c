#include "main.h"
/**
 * print_numbers - enty point
 *
 * Description: C program prints numbers with print_alphabet function
 *
 * Return: Always 0 (success)
*/
void print_numbers(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
