#include "main.h"

/**
 * puts2 - Print characters with steps
 *
 * Return: Nothing
 */
void puts2(char *str)
{
	char *end;

	end = str;
	while(*end != '\0')
	{
		end++;
	}
	end--;

	while(str < end)
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
