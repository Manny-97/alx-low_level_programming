#include "main.h"
/**
 * main - prints 10 times the alphabet
 *
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int j;

	while (i < 10)
		j = 'a';
		while (j <= 'z')
			_putchar(j);
			j++;
		_putchar('\n');
		i++;
	
}
