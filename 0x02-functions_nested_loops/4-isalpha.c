#include "main.h"
/**
 * _isalpha - enty point
 *
 * Description: checks function's i/p
 *
 * @c: i/p character or number
 *
 * Return: 1 (success)
 *         0 (failure)
*/
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	return (0);
}
