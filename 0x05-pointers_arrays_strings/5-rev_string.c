#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @s: string passed as parameter
 * Return: 0
 */
void rev_string(char *s)
{
	int i, c;
	char h;

	for (i = 0; s[i] != '\0'; i++)
		;


	for (i--, c = 0; c < 1 / 2; i--, c++)
	{
		h = s[c];
		s[c] = s[i];
		s[i] = h;
	}
}
