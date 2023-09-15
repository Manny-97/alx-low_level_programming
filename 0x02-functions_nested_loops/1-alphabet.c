#include "main.h"
/**
 * print_alphabet - print the alphabet
 *
 */
void print_alphabet(void)
{
	char letter[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 26)
		_putchar(letter[i++]);
	_putchar('\n');
}
