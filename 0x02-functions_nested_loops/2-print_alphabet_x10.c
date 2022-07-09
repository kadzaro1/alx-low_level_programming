#include "main.h"

/**
 * print_alphabet_10x - prints alphabet from a-z ten times
 *
 * _putchar: prints to the output stream
 */
void print_alphabet_10x(void)
{
int i;
int j;
for (i = 0; i <= 10; i++)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}
_putchar('\n');
}
}
