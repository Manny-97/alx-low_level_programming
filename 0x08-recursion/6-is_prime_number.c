#include "main.h"
/**
 *check_prime - check if integer is prime
 *@a: integer character
 *@b: integer character
 *Return: integer
 */
int check_prime(int a, int b)
{
	if (a % b == 0)
	{
		if (a == b)
			return (1);
		else
			return (0);
	}
	return (0 + check_prime(a, b + 1));
}
/**
 *is_prime_number - returns 1 if the input integer
 *	is a prime number, otherwise return 0
 *@n: integer character
 *Return: integer
 */
int is_prime_number(int n)
{
	if (n == 1)
	{
		return (0);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (0);
	}
	return check_prime(n, 2);
}
