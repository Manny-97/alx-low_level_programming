#include "main.h"
#include <limits.h>
/**
 * print_last_digit - print last integer of a number
 *
 * @n: integer character
 *
 *Return: last number of digit
 */
int print_last_digit(int n)
{
	int last_digit;
	if (n == INT_MIN)
	{
		last_digit = 8;
		_putchar(last_digit + '0');
		return (last_digit);
	}
	if (n < 0)
	n = -n;
	last_digit = n % 10;
	_putchar(last_digit + '0');
	return (last_digit);
}
