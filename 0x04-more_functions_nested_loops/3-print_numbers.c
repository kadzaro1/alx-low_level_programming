#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9,
 * followed by a new line.
 *
 * _putchar: prints char onto std output
 */

void print_numbers(void)
{
char num;
	for (num = 0; num < 10; num++)
	{
	_putchar(num + '0');
	}
_putchar('\n');
}
