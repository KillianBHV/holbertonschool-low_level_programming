#include "main.h"

/**
 * strcpy - copy a source buffer to a destination buffer
 * @dest: Final Buffer
 * @src: Original Buffer
 *
 * Return: pointer to the destination buffer
 */
char *_strcpy(char *dest, char *src)
{
	char *p;

	p = dest;
	while(*src != '\0)
	{
		*dest = *src;
		dest++;
		src++
	}
	*dest = '\0';
	
	return (p);
}
