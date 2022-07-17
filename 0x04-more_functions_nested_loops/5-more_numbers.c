#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 *
 *
 * _putchar: prints char to the std output
 */

void more_numbers(void)
{
int num1;
char num2;
char results;
	for (num1 = 1; num1 <= 10; num1++)
	{
		for (num2 = 0; num2 <= 14; num2++)
		{
			results = 0;
			if (num2 > 9)
			{
				_putchar('1');
			results = num2 % 10;
			}
		_putchar('0' + results);
		}
	_putchar('\n');
	}
}
