#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: the string taken as parameter
 *
 * Return:  0
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
