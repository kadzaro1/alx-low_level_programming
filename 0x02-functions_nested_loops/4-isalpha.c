#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 *
 * Return: 1 or 0
 *
 * @c: character parameter
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
