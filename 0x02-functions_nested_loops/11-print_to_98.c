#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints n to 98
 *
 *@n: integer parameter
 *
 * printf: prints to the standard output
 */

void print_to_98(int n)
{
for (; n <= 98; n++)
{
	if (98 - n != 0)
	{
		printf("%d", n);
		printf(",");
		printf(" ");
	}
	else
		printf("%d", n);
}
for (; n >= 98; n--)
{
	if (n - 98 != 0)
	{
	printf("%d", n);
	printf(",");
	printf(" ");
	}
	else
	printf("%d", n);
}
}
