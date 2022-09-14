#include "main.h"
/*
 * prints the lower case alphabets
 *
 * @print_alphabet prints all letters in small letter
*/
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
