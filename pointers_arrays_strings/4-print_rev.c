#include "main.h"

/**
 * print-rev - Print the reverse selected string
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
		p += 1;
	}

	while (p >= s)
	{
		_putchar(*p);
		p -= 1;
	}
	_putchar("\n");
}
