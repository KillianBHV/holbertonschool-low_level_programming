#include "main.h"

/**
 * print_array - print the elements of an array
 * @a: pointer to an array
 * @b: size of the pointed array
 *
 * Return: Nothing
 */
void print_array(int *a, int b)
{
	int i;

	for(i = 0; i < b; i++)
	{
		printf("%d", *(a+i));
		if (i < (b - 1))
		{
			printf(", ");	
		}
	}
	printf("\n");
}
