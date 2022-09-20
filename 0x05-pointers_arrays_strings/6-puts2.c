#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * followed by new line
 * @str: string passed as parameter
 * Return: 0
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
