#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * followed by new line
 * @a: array of integers
 * @n: is the number of elements of the array to be printed
 * Numbers must be separated by comma followed by a space
 * Return: 0
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

		if (j != (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
