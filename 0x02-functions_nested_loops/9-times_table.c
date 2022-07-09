#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * _putchar: prints a character onto the std output
 */

void times_table(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
	{
	_putchar((i * j));
	_putchar(32);
	_putchar(44);
	}
}
_putchar('\n');
}
