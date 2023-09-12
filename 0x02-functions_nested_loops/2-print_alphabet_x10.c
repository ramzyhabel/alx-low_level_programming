#include "main.h"
/**
 * print_alphabet_x10 - enty point
 *
 * Description: prints 10 times the alphabet, in lowercase
 *
 * Return: Always 0 (success)
*/
void print_alphabet_x10(void)
{
	int ch;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
	return (0);
}
