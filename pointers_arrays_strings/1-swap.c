#include "main.h"
/**
 * swap - swap two int values
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
