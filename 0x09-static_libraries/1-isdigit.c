#include "main.h"
/**
 * _isdigit - checks weather a number passed as argument is digit number
 * @value: argument to be checked
 * Return: rturns 1 if successfull otherwise 0
 */
int _isdigit(int value)
{
	if (value >= '0' && value <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
