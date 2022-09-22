#include "main.h"
/**
 * _strcmp - compares pointers to two strings
 * @s1: A pointer to the First string
 * @s2: A pointer to the second string
 *
 * Return: positive if s1 > s2
 *	   negative if s1 < s2
 *	   zero  if    s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
