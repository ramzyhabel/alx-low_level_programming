#include "main.h"
/**
 * print_alphabet - enty point
 *
 * Description: C program prints alphabet with print_alphabet function
 *
 * Return: Always 0 (success)
*/
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
