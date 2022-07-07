#include "main.h"

/**
 * print_alphabet - prints alphabet
 *
 * _putchar: prints to the output stream
 */
void print_alphabet(void)
{
int  ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
