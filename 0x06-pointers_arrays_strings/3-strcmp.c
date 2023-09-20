#include "main.h"
/**
 *_strcmp - compares two strings
 *@s1: character parameter1
 *@s2: character parameter2
 *Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	while (((*s1 != '\0') && (*s2 != '\0')) && (*s1 != *s2))
	{
		s1++;
		s2++;
	}
	if (*s1 !+ *s2)
	{
		return (*s1 - *s2);
	}
	else
		return (0);
}
