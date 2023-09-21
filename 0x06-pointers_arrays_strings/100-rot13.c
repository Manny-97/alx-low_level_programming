#include "main.h"
/**
 *rot13 - encodes a string using rot13
 *@c: character parameter
 *Return: character
 */
char *rot13(char *c)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(c + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[j] == *(c + i))
			{
				*(c + i) = b[j];
				break;
			}
		}
	}
	return (c);
}
