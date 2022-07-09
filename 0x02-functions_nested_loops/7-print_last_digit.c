#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @i: parameter is an integer
 *
 * Return: last digit
 */
int print_last_digit(int i)
{
int last_digit;
if (i < 0)
{
	i = -i;
	last_digit = i;
	_putchar(last_digit + '0');
}
return (last_digit);
}
