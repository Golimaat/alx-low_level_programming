#include "main.h"
/**
 * print_array - prints n elements of an array of integers followed by new line
 * @n: is the number of elements of the array to be printed
 * Numbers must be separated by comma followed by a space
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			_putchar('%d', a[i]);
		else
			_putchar(', %d', a[i]);
	}
	_putchar('\n');
}
