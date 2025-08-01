#include "main.h"

/**
 * puts2 - Print characters with steps
 * @str: string to print
 *
 * Return: Nothing
 */
void puts2(char *str)
{
	char *end;

	end = str;
	while (*end != '\0')
	{
		end++;
	}

	while (str < end)
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
