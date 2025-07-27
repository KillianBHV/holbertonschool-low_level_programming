#include "main.h"

/**
 * print_rev - Print the reverse selected string
 * @s: String to reverse
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	char *p;

	p = s;
	while (*p != '\0')
	{
		p++;
	}

	p--;
	while (p >= s)
	{
		_putchar(*p);
		p--;
	}
	_putchar('\n');
}
