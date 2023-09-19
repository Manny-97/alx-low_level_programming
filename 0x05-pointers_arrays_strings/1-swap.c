#include "main.h"
/**
 *swao_int - swaps the values of two integers
 *@a: first integer number
 *@b: second integer number
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
