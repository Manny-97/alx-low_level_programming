#include "main.h"
/**
 * _isdigit - checks for single digit
 *
 * @c: character to check
 *
 * Return: 1 for digit and 0 otherwise
 **/
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
