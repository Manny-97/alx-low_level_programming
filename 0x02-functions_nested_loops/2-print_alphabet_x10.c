#include "main.h"
/**
 * main - prints 10 times the alphabet
 *
 */
void print_alphabet_x10(void)
{
int i;
int j = 0;

while (j < 10)
{
i = 'a';
while (i <= 'z')
{
_putchar(i);
i++;
}
_putchar('\n');
j++;
}
}
