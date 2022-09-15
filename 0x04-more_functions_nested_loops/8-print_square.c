#include "main.h"
/**
 * print_square - prints a square followed by a new line
 * @size: size of the square
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the square
 */
void print_square(int size)
{
	int width, height;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (height = 0; height < size; height++)
		{
			for (width = 0; width < size; width++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
