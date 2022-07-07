#include "main.h"

/**
 * print_alphabet_10x - prints alphabet from a-z ten times
 *
 * _putchar: prints to the output stream
 */
void print_alphabet_10x(void)
{
int i;
int ch;
for (i = 0; i <= 10; i++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
