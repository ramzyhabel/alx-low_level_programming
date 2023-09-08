#include <stdio.h>
/**
 * main - enty point
 *
 * Description: C program that prints alphabet in reverse
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char last_letter = 122;

	while (last_letter <= 97)
	{
		putchar(last_letter);
		last_letter--;
	}
	putchar('\n');
	return (0);
}
