#include <stdio.h>

/**
 * print_rev - Print the string reversely
 * @s: String to reverse
 *
 * Return: Nothing.
 */
void print_rev(char *s)
{
	char *p;
	
	p = s;
	while (*p != '\0')
	{
		p += 1;
	}
	while(p >= s)
	{
		printf("%c", *p);
		p -= 1;
	}
	printf("\n");
}
