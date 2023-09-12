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
	int n = 9;
	int i;
	int r;

	for (i = 0; i <= 10; i++)
	{
		r = i * n;
		_putchar(r + 48);
		_putchar('\n');
	}
}
