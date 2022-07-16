#include "main.h"
#include <string.h>

/**
 * char *_strcpy - copies the string pointed to by src to dest
 *
 *@dest: parameter
 *
 *@src: parameter
 *
 * Return: return string
 */

char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
	dest[i] = src[i];
	src++;
}
dest[i++] = src;

return (dest);
}
