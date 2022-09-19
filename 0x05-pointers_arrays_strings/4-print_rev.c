#include "main.h"
/**
 * print_rev - print a string in reverse followed by newline
 * @s: string passed as parameter
 * Return: 0 
 */
void print_rev(char *s)
{
  int i, j, len;
  
  i = 0;
  
  while (s[i] != '\0')
  {
    i++;
  }
  len = i;
  for (j = len - 1; j >= 0; j--)
  {
    _putchar(s[j]);
  }
  
  _putchar('\n');
}
