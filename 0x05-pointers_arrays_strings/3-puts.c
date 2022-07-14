#include "main.h"

/**
 * _puts - prints a string, folowed by a new line
 *
 *@str: string parameter
 *
 * _putchar: prints to the std output
 */
void _puts(char *str)
{
for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
_putchar('\n');
}
