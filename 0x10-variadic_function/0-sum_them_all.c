#include "variadic_functions.h"

/**
 * sum_them_all - adds num
 * @n: param
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
		printf("%d", var_arg(nums, int));
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator;
	
	printf("\n");
	va_end(valist);

	
}
