#include <stdio.h>
/**
* main - main block
* Description :print all possible different combinatios of 3 digits.
* Numberes must be separated by commas and a spacw .
* The 3 digits must be different.
* 012, 120, 102, 021, 201, 210  area considered the same combination.
* print only the smallest comination of 3 digits..
* Numbers should be printed in ascending order.
* You can only use `putchar` to print to console .
* you can only use `putchar` up to 6 times .
* you are not allowed  to use any variables of type `char` .
* Return:0
*/
int main(void)
{
	int i, j, k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);

					if (i != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}







