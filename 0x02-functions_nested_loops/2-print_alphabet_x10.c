#include "main.h"

/**
 * print_alphabet_10x - prints alphabet from a-z ten times
 *
 * _putchar: prints to the output stream
 */
void print_alphabet_x10(void)
{
int i;
int j;
for (i = 1; i <= 10; i++)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}
_putchar('\n');
}
}
