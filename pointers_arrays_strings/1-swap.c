#include "main.h"
/**
 * swaip_int - swap two int values
 * @a: First value
 * @b: Second value
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
