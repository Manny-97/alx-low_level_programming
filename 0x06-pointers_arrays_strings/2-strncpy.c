#include "main.h"
/**
 *_strncpy - copies a string
 *@dest: character parameter
 *@src: character parameter
 *Return: pointer to character dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + 1) != '\0'; i++)
	{
		*(dest + 1) = *(src + 1);
	}
	for (; i < n; i++)
	{
		*(dest + 1) = '\0';
	}
	return (dest);
}
