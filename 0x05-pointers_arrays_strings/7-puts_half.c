#include "main.h"
#include <string.h>
/**
 * puts_half - print the second half of the string
 *
 *@str: character parameter
 *
 * _putchar: prints character var
 */
void puts_half(char *str)
{
int len1, len2, len3, len4;
len1 = strlen(str);
len2 = len1 / 2;
len3 = len1 % 2;
len4 = len1 - 1 / 2;
	for (; len2 < len1; len2++)
	{
	if (len3 != 0)
	_putchar(str[len4]);
		else
	_putchar(str[len2]);
	}
_putchar('\n');
}
