#include "main.h"
/**
 * _islower - enty point
 *
 * Description: checks function's i/p
 *
 * @c: i/p character
 *
 * Return: 1 (success)
 *         0 (failure)
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
