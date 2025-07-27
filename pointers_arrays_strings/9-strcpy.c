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
	char *s;

	s = dest;
	while(*src != '\0') {
		*dest = *src;
		src++;
		dest++;
	}

	return s;
}
