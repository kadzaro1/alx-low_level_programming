#include <stdio.h>i
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int ch;
for (ch = 48; ch <= 57; ch++)
	putchar(ch);
putchar(10); /* ascii code for new line*/
return (0);
}
