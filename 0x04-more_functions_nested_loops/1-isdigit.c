#include "main.h"
/**
 * _isdigit - enty point
 *
 * Description: checks function's i/p
 *
 * @c: i/p character or number
 *
 * Return: 1 (success)
 *         0 (failure)
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
