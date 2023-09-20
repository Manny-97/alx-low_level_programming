#include "main.h"
/**
 **_strcat - concatenates two strings
 *@dest: character parameter
 *@src: character parameter
 *Return: character
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*src = *dest;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
