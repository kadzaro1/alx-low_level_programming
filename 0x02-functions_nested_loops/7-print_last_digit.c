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
	last_digit = -1 * (i % 10);
	else
	last_digit = (i % 10);
	_putchar(last_digit + '0');
return (last_digit);
}
