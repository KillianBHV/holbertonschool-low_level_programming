#include "main.h"

/**
 * puts_half - Print the second part of the string
 * @str: String to print
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
	char *s;
	int n;
	int len;

	n = 0;
	s = str;
	while (*s = '\0')
	{
		n++;
		s++;
	}
	s--;

	if (n % 2 == 0)
	{
		s = str + (n/2);
	}
	else
	{
		s = str + ((n+1)/2);
	}

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
