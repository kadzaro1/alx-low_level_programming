#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line
 *
 *@a: array name
 *@n: nth element
 *
 * _putchar: prints to the std output
 */

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
_putchar(a[i]);
_putchar(44);
_putchar(32);
}
_putchar('\n');
}
