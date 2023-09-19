#include <unistd.h>
/**
 *_putchar - print character
 *@c: character to be printed
 *Return: 1 when successful, and 0 when there is an error
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
