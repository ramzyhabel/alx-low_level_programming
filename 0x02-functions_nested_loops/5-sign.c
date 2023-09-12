#include "main.h"
/**
 * print_sign - enty point
 *
 * Description: prints the sign of a number
 *
 * @n: i/p character or number
 *
 * Return: 1 (if > 0)
 *         0 (if = 0)
 *         -1 (if < 0)
*/
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (-1);
	}
}
