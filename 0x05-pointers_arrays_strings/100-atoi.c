#include "main.h"

/**
 * _isdigit - checks if character is a digit
 * @s: the character to check
 *
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(char s)
{
	return (s >= '0' && s <= '9');
}

/**
 * _atoi - converts string to integer
 * @s: the string
 *
 * Return: integer  value of string
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;
		else if
			(*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}
