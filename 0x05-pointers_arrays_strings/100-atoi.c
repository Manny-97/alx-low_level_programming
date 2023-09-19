#include "main.h"
/**
 *_atoi - convert a string to an integer
 *@s: string character
 *Return: return dest
 */
int _atoi(char *s)
{
	int i = 0;
	int j = 0;
	int min = 1;
	unsigned int n = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			min *= -1;
		}
		while (s[i] >= 48 && s[i] <= 57)
		{
			j = 1;
			n = (n * 10) + (s[i] - '0');
			i++;
		}
		if (j == 1)
		{
			break;
		}
		i++;
	}
	n *= min;
	return (n);
}
