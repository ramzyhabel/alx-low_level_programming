#include <stdio.h>
/**
 * main - enty point
 *
 * Description: C program print alphabet expect o & q
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char first_letter = 97;

	while (first_letter <= 122 && first_letter != 101 && first_letter != 113)
	{
		putchar(first_letter);
		first_letter++;
	}
	putchar('\n');
	return (0);
}
