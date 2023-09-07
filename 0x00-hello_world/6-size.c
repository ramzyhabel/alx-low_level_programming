#include <stdio.h>

/**
 * main - enty point
 *
 * Description: C program that prints differnt variables' sizes
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	printf("Size of a char:", sizeof(char));
	printf("Size of an int:", sizeof(int));
	printf("Size of a long int:", sizeof(long int));
	printf("Size of a long long int:", sizeof(long long int));
	printf("Size of a float:", sizeof(float));
	return (0);
}
