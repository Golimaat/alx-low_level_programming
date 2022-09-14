#include "main.h"
/**
* main - Entry point
*
* Review: nothingreturn void
*/
int main(void)
{
	char setc[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(setc[i]);
	}
	_putchar('\n');
	return (0);
}
