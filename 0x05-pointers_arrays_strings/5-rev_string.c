#include "main.h"
/**
 *
 *
 *
 */
void rev_string(char *s)
{
	int a = 0, b, c;

	while (s[a] != '\0')
	{
		a++;
	}
	c = a - 1;
	for (b = 0; c >= 0 && b < c; c--, b++)
	{
		d = s[b];
		s[b] = s[c];
		s[c] = d;
	}
}
