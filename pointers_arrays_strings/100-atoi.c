#include "main.h"

/**
 * _atoi - Convert string to integer
 * @s: Strings to convert to an integer
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int i;
	int len;
	char c;

	while (*size != '0')
	{
		len += 1;
	}

	for (i = 0; i < len; i++)
	{
		c = *(s + i); 
		if(c >= '0' && c <= '9' || c == '+' || c == '-')
		{
			*(s + i) = ' ';
		}
	}
}
