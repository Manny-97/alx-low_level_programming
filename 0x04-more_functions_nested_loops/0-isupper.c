#include "main.h"
/*
 * _isupper - check if c is upper case
 *
 * @c: character to check
 *
 * Return: 1 if its uppercase, 0 if no
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
