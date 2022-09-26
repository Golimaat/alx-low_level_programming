#include "main.h"
/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of character
 *
 * Return: the number of bytes in the initial segment
 * of s which consists only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, f, f1;

	f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		f1 = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f++;
				f1 = 1;
			}
		}
		if (f1 == 0)
		{
			return (f);
		}
	}
	return (0);
}
