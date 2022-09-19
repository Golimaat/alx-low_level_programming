#include "main.h"
/**
 * swap_int - swaps the values of two integers a and b
 * @a: value one
 * @b: value two
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
