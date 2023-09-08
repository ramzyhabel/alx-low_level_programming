#include <stdio.h>
/**
 * main - enty point
 *
 * Description: C program to print the alphabet using putchar
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char first_letter = 97;

	if (first_letter >= 97 || first_letter <= 122)
	{
	putchar(first_letter);
	first_letter++;
	}
	return (0);
}
