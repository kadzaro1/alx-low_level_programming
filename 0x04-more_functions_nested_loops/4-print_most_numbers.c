#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * followed by a new line
 *
 *
 * _putchar: prints char onto the std output
 */

void print_most_numbers(void)
{
char num;
for (num = 0; num < 10; num++)
{
	if (num != 2 && num != 4)
	{
		_putchar(num + '0');
	}
}
_putchar('\n');
}
