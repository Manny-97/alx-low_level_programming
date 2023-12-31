#include "main.h"
/**
 *_memset - fills memory with a constant byte
 *@s: pointer with constant byte b
 *@bsize of pointer
 *@n: bytes of the memory allocation for s
 *Return: pointer to the loaction of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
