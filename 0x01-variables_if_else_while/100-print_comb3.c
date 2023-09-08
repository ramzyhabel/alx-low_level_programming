#include <stdio.h>
/**
 * main - enty point
 *
 * Description: C program prints all possible combinations of 2 numbers
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int n1 = 0, n2;

	while (n1 <= 9)
	{
		n2 = 0;

		while (n2 <= 9)
		{
			if (n1 != n2 && n1 < n2)
			{
				putchar(n1 + 48);
				putchar(n2 + 48);
				if (n1 != 8 || n2 != 9)
				{
					putchar(',');
					putchar(32);
				{
			}
		n2++;
		}
	n1++;
	}
	putchar('\n');
	return (0);
}
