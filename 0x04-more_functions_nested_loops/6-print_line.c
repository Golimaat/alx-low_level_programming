#include "main.h"
/**
 * print_line - print a straigt line
 * @n: is the number of tmes the  _ character should be printed
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
