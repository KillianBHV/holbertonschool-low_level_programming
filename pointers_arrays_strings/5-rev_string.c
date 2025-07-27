#include "main.h"

/**
 * rev_string - reverse the specified string
 *
 * Return: Nothing.
 */
void rev_string(char *s)
{
	char *r;
	char c;

	r = s;
	while (*r != '\0')
	{
		r += 1;
	}
	r -= 1;

	while (r > s)
	{
		c = *s;
		*s = *r;
		*r = c;
	}
}
