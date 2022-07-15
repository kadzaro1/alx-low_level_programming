#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * _putchar: prints a character onto the std output
 */

void times_table(void)
{
int i, j, k;
for (j = 1; j <= 10; j++)
{
for (i = 0; i < 10; i++)
{
k = j * i;
if (10 - i != 1)
	{
	_putchar(k);
	_putchar(44);
	_putchar(32);
	}
else
	_putchar(k);
}
}
_putchar('\n');
}
