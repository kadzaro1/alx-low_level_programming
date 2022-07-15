#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string.
 *
 *@s: character parameter
 *
 *_putchar:
 */
void rev_string(char *s)
{
char temp;
temp = *s;
int j = strlen(s);

for (int i = j; i <= j; i--)
	{
	_putchar(temp);
	_putchar('\n');
	_putchar(s[i]);
	}
_putchar('\n');
}
