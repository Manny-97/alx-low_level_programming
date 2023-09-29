#include "main.h"
/**
 *factorial - the factorial of a given number
 *@n: integer character
 *Return: integer
 */
int factorial(int n)
{
	int i;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		i = n * factorial(n - 1);
	}
	return (i);
}
