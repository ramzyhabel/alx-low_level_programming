#include "main.h"
/**
 * _isupper - enty point
 *
 * Description: checks function's i/p
 *
 * @c: i/p character
 *
 * Return: 1 (success)
 *         0 (failure)
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
