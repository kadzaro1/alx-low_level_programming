#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 *@s: character parameter
 *
 * _putchar: print out character onto the stdout
 */
void print_rev(char *s)
{
int x, i;
x = strlen(s);
i = x - 1;
for (; i >= 0; i--)
	{
	_putchar(s[i]);
	}
_putchar('\n');
}
