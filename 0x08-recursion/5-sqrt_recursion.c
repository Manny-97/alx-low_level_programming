#include "main.h"
/**
 *check_sqrt - return the sqrt of a number
 *@a: integer character
 *@b: integer character
 *Return: integer
 */
int check_sqrt(int a, int b)
{
	if (b % (a / b) == 0)
	{
		if (b * (a / b) == a)
			return (b);
		else
			return (-1);
	}
	return (0 + check_sqrt(a, b + 1));
}
/**
 *_sqrt_recursion - natural square root of a number
 *@n: integer character
 *Return: integer
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (check_sqrt(n, 2));
}
