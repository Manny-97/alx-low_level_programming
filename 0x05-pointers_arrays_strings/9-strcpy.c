#include "main.h"
/**
 **_strcpy - copies the string pointed to by src,
 *	including the terminating null byte (\0),
 *	to the buffer pointed to by dest
 *@dest: string character to return
 *@src: string character that is passed
 *Return: return dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
