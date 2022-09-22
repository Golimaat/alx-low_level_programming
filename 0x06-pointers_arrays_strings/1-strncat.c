#include "main.h"
/**
 * _strncat - concatenates two strings using number of bytes from src
 * @dest: string to be appended on
 * @src: string to be appended on @dest
 * @n: The number of bytes
 * Return: A pointer dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
